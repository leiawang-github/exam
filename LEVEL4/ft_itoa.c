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
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

int ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int nbr)
{
	char *result; //最终结果是一个char *
	int len;
	int i = 0;

	len = nlen(nbr);
	if (nbr < 0)
		i++;
	len = len + i;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '-'; //正数时不会显示
	result[len] = '\0';
	while ((len - 1) >= i)
	{
		result[len - 1] = ft_abs(nbr % 10) + '0';
		nbr =nbr / 10;
		len--;
	}
	return (result);
}

int main()
{
    int nbr1 = 123;
    int nbr2 = -123;

    printf("%s\n", ft_itoa(nbr1));
    printf("%s\n", ft_itoa(nbr2));

}