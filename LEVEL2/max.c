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

//hints:

// 1. use i as index, as long as i < len we compare tab[i] with temp number 
// 2. whichever is bigger set it to temp max and compare with next one
// 3. till the tab[len] which is the last one in the arr, final temp max is the max one 

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int i = 0;

	int temp_max = 0;

	if( !tab)
		return (0);
	else
	{
		while (i < len)
		{
			if (tab[i] > temp_max)
				temp_max = tab[i];
			i++;
		}
		return (temp_max);
	}
}

int main()
{
	int tab[] = {12, 88, 234, -2332,768127};
	int len = 5;

	printf("result: %d\n", max(tab, len));
}