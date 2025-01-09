#include <stdio.h>

int is_prime(int num)
{
	int i = 1;

	if (num == 1)
		return (0);
	else 
	{
		while ( i++ <= num)
		{
			if (num % i == 0)
				return (0);
			else
				return (1);
		}
	}
	return (0);
}

int main()
{
	printf("Am I a prime? %d \n", is_prime(143));
}