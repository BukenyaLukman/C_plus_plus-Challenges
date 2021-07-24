#include<iostream>
/* 
Write a program that computes and prints 
the largest prime number that is smaller than a
number provided by the user, 
which must be a positive integer.
*/

//Primerity Test

bool is_prime(int const num){
    if(num <= 3){ 
        return num > 1;
    }else if(num % 2 == 0 || num % 3 == 0){
        return false;
    }
    else{
        for (int i = 5; i * i <= num; i += 6)
        { 
            if(num % i == 0 || num % (i + 2) == 0)
            {
                return false;
            }
        }
        return true;  
    }
}
int main()
{   

    int limit = 0;
    std::cout  << "Upper Limit: ";
    std::cin >> limit;

    for (int i = limit; i > 1; i--)
    {
        if(is_prime(i)){
           std::cout << "Largest Prime: "<< i << std::endl; 
           return 0;
        }
    }
    
    return 0;
}
