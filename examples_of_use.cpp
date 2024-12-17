#include <iostream>
#include "mymath.hpp"

int main() {

    std::cout << my::gcd(13, 0) << "  " << my::gcd(-13, 5) << "  " << my::gcd(13, 5) << '\n';

    std::cout << my::gcd(14, 7, my::loop_version_tag()) << "  " << my::gcd(14, 2, my::loop_version_tag())
                << "  " <<  my::gcd(13, 13, my::loop_version_tag()) << '\n';


    //print n prime numbers
    std::cout << "next example:\n";
    my::print_primes(1);
    
    std::cout << "next example:\n";
    my::print_primes(5);
    
    std::cout << "next example:\n";
    my::print_primes(500);

}