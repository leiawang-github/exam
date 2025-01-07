// Assignment name  : rev_print
// Expected files   : rev_print.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a string, and displays the string in reverse
// followed by a newline.

// The original string must not be modified.

// You must return the string passed as a parameter.

// Your function must be declared as follows:

// char *rev_print(char *str);

// Examples:

// int main(void)
// {
//   rev_print("Hello world");
//   write (1, "\n", 1);
//   rev_print("tnirp esreveR");
//   write (1, "\n", 1);
//   rev_print("");
//   write (1, "\n", 1);
// }

// Output :
// $> ./a.out | cat -e
// dlrow olleH$
// $> ./a.out | cat -e
// Reverse print$
// $> ./a.out | cat -e
// $

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