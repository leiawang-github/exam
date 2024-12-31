//"    -1235aan 89 "

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
        	str++;
	if (*str == '-')
		sign = -1;
	while (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}
int main(void)
{
	char str[] = "   --1235aan 89 ";
	printf("The result will be :%d\n", ft_atoi(str));
	printf("The result will be :%d\n", atoi(str));
}

