// Assignment name  : ft_range
// Expected files   : ft_range.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_range(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at start and end at end (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 1, 2 and 3.
// - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing 0, -1, -2 and -3.

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
   // int *arr[] ={};
    int len = abs(end - start) + 1;

    int *arr = (int *)malloc(sizeof(int) * len);

    while(i < len)
    {
        if(start < end)
        {
            arr[i] = start;
            start++;
            i++;
        }
        else{
            arr[i] =start;
            start--;
            i++;
        }
    }
    return (arr);

}

int main()
{
    int *result = ft_range(8, 5);  // result is now a pointer to the array

    // Print the values in the array
    for (int i = 0; result[i] != '\0'; i++)  // Print until the array is ended (null terminated is not strictly correct, adjust condition as needed)
    {
        printf("%d ", result[i]);
    }
    
    // Don't forget to free the allocated memory
    free(result);

    return 0;
}

