/*
Write a program that, given two positive integers, 
will calculate and print the greatest
common divisor of the two.
*/


#include<iostream>

// Using a recursive method
//Using unsigned b'se gcd is non negative
// unsigned int only hold non-negative integers
unsigned int gcd(unsigned int const a, unsigned int const b)
{
        return b == 0 ? a : gcd(b, a % b); 
}

//Non recursive method
unsigned int gcd_(unsigned int a, unsigned int b){
    while (b != 0)
    {
        unsigned int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
    
}

int main()
{
    
    std::cout <<  "gcd " << gcd(13, 12) << std::endl;
    std::cout <<  "gcd " << gcd_(13, 12) << std::endl;

    return 0;
}
