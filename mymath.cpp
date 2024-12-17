#include <iostream>
#include <vector>
#include "mymath.hpp"

int my::gcd(int a, int b) { 
    return b ? gcd(b, a % b) : std::abs(a);
}

int my::gcd(int a, int b, my::loop_version_tag) {

    while (b) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }

    return std::abs(a);
}

void my::print_primes(int n) {
    
    std::vector<bool> sieve = std::vector<bool>(n*n, 0);

    sieve[0] = 1; 
    sieve[1] = 1;

    int counter = 0;
    int i = 2;

    while (counter < n) {
        if (sieve[i] == 0) {
            
            std::cout << i << '\n';
            ++counter;
            
            for(int j = i*i; j <= n*n; j += i)
                sieve[j] = 1; 
        }
        ++i;
    }
}