// Assignment name  : swap_bits
// Expected files   : swap_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, swaps its halves (like the example) and
// returns the result.

// Your function must be declared as follows:

// unsigned char	swap_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100 | 0001
//      \ /
//      / \
//  0001 | 0100

#include<stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet) //返回值是一个0-255之间的数字
{
    // int i = 7;
    // char bit;
    // unsigned char	res = 0;

    // while (i>= 0)
    // {
    //     if (i >= 4)
    //         bit = (octet >> i) & 1 + '0';
    //     else
    //         bit = (i << octet) & 1 + '0';
    //     write(1, &bit, 1);
    //     i--;
    // }
    return ((octet >> 4) | (octet << 4));
}

int main()
{
    unsigned char num =123;  
    unsigned char result = swap_bits(num); 
    printf("result: %d",swap_bits(num));
}