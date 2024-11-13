// Assignment name  : is_power_of_2
// Expected files   : is_power_of_2.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that determines if a given number is a power of 2.

// This function returns 1 if the given number is a power of 2, otherwise it returns 0.

// Your function must be declared as follows:

#include <stdio.h>
// int	    is_power_of_2(unsigned int n)
// {
//     if(n==0)
//         return (0);
    
//     while (n % 2 == 0)
//         n = n /2;
//     if(n == 1)
//         return (1);
//     else 
//         return (0);
// }

int	    is_power_of_2(unsigned int n)
{
    if(n==0)
        return (0);

    return (n&(n-1)) == 0;
}

int main()
{
    int n = 16;
    printf("result: %d", is_power_of_2(n));
}

