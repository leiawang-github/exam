// Assignment name  : reverse_bits
// Expected files   : reverse_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, reverses it, bit by bit (like the
// example) and returns the result.

// Your function must be declared as follows:

// unsigned char	reverse_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100  0001
//      ||
//      \/
//  1000  0010

#include <stdio.h>

unsigned char	reverse_bits(unsigned char num)
{
	int		i = 7;
    unsigned char bit;
	unsigned char	res = 0;

    while( i >= 0)
    {
        bit = ((num >> i) & 1) << (7 - i);
        res = res | bit;
        i--;
    }
    return (res);
}

int main()
{
    unsigned char octet = 100;
    printf("res: %d\n", reverse_bits(octet));
}