
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