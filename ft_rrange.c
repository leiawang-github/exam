#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int *arr;
	int len;
	
	
	if(end > 0)
	{
		len = end - start + 1;
		arr = (int *)malloc(sizeof(int) * len); 
		if (!arr)
			return (NULL);
		while (start <= end)
		{
			arr[len - 1] = start;
			len--;
			start++;
		}
	}
	else if (end <= 0)
	{
		len = start - end + 1;
		arr = (int *)malloc(sizeof(int) * len); 
		if (!arr)
			return (NULL);
		while (start >= end)
		{
			arr[len - 1] = start;
			len--;
			start--;
		}
	}
	return (arr);
}

int main()
{
	int *arr = ft_rrange(-1, -4);

	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);

	free(arr);
}