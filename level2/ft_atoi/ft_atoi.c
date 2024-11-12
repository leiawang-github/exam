//"    -1235aan 89 "

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int	sign = 1;
	int result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = sign * (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

int main(void)
{
	char str[] = "    -1235aan 89 ";
	printf("The result will be :%d\n", ft_atoi(str));
}

