#include <stdlib.h>
#include <stdio.h>

int nlen(int nbr)
{
	int i;

	if (nbr == 0)
		return (1);
	i = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int main()
{
    printf("%d", nlen(-199));
}