#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int end;
	int start;

	if (ac == 2)
	{
		while (av[1][i] != '\0')
			i++;
		i--;
		while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
			i--;
		end = i;
		while (i >= 0 && (av[1][i] != ' ' && av[1][i] != '\t'))
			i--;
		start = i;

		while (start <= end)
		{
			write(1, &av[1][start], 1);
			start++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}