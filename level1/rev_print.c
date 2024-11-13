
#include <unistd.h>

char *ft_strrev(char *str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--; 
	}
	return (str);
}

int main(int ac, char **av)
{
	int i = 0;
	if( ac == 2)
	{
		ft_strrev(av[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}