//Write a program that calculates and prints the sum of all the natural numbers divisible by
//either 3 or 5, up to a given limit entered by the user.

/* the soluition is to iterate through numbers
from 3  upto the limit

The trick is, in order to add up to the
 large value, use long long instead of int or long

 long
*/



#include<iostream>


int main()
{
    unsigned int limit = 0;

    std::cout << "Enter Upper Limit ";
    std::cin >> limit;


    unsigned long long sum  = 0;
    //Using the long long because it can hold larger 
    // sums of order 10,000
    for (unsigned int i = 0; i < limit; i++)
    {
        if(i % 3 == 0 || i % 5 == 0 ){
            sum += i;
        }
        
    }
    std::cout << "sum " << sum  << std::endl;
    
    return 0;
}
