// Assignment name  : max
// Expected files   : max.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int, the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	temp;

	i = 0;
	temp = tab[i];

	while (i < len)
	{
		if (temp < tab[i])
		{
			temp = tab[i];
		}
		i++;
	}
	return temp;
}

int main(void)
{
	int tab[] = {12,23,202,3,87};
	printf("The max is: %d\n", max(tab, 5));
}

