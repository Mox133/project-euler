/*
    Project Euler - Problem 1
    Multipliers of 3 or 5

    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6, and 9 
    The sum of these multiples is 23.

    Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

int main() {
    const int limit = 1000;
    long sum = 0;

    // Add multiples of 3
    for (int i = 3; i < limit; i += 3) {
        sum += i;
    }

    // Add multiples of 5, skip multiples of 15 (already counted)
    for (int i = 5; i < limit; i += 5) {
        if (i % 3 != 0) {  // skip common multiples
            sum += i;
        }
    }

    std::cout << "Sum of all multiples of 3 or 5 below " << limit << ": " << sum << std::endl;
}