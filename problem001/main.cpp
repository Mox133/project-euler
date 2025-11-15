/*
    Project Euler - Problem 1
    Multipliers of 3 or 5

    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6, and 9 
    The sum of these multiples is 23.

    Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

long sum_of_multiples(int k, int limit) {
    int p = (limit - 1) / k;
    return static_cast<long>(k) * p * (p + 1) / 2;
}

int main() {
    const int limit = 1000;

    long sum = sum_of_multiples(3, limit) 
             + sum_of_multiples(5, limit) 
             - sum_of_multiples(15, limit); // remove double-counted multiples

    std::cout << "Sum of all multiples of 3 or 5 below " << limit << ": " << sum << std::endl;
}