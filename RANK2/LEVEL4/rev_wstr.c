// Assignment name  : rev_wstr
// Expected files   : rev_wstr.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string as a parameter, and prints its words in
// reverse order.

// A "word" is a part of the string bounded by spaces and/or tabs, or the
// begin/end of the string.

// If the number of parameters is different from 1, the program will display
// '\n'.

// In the parameters that are going to be tested,
// 	there won't be any "additional"
//
// spaces (meaning that there won't be additionnal spaces at the beginning or at
// // the end of the string,
// 	and words will always be separated by exactly one space).

// Examples:

// $> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat
//-e
// ironic? it Isn't gatherings. love I But people! hate You$
// $>./rev_wstr "abcdefghijklm"
// abcdefghijklm
// $> ./rev_wstr "Wingardium Leviosa" | cat -e
// Leviosa Wingardium$
// $> ./rev_wstr | cat -e
// $
// $>

#include <unistd.h>

// int	main(int ac, char **av)
// {
// 	int	i;
// 	int	word_start;
// 	int	word_end;
// 	int	flag;

// 	i = 0;
// 	if (ac == 2)
// 	{
// 		while (av[1][i])
// 			i++;
// 		while (i >= 0)
// 		{
// 			while (av[1][i] == '\t' || av[1][i] == ' ' || av[1][i] == '\0')
// 				i--;
// 			word_end = i;
// 			while (av[1][i] && av[1][i] != '\t' && av[1][i] != ' ') //注意条件
// 				i--;
// 			word_start = i + 1;
// 			flag = word_start;
// 			while (word_end - word_start >= 0)
// 			{
// 				write(1, &av[1][word_start], 1);
// 				word_start++;
// 			}
// 			if (flag != 0)
// 				write(1, " ", 1);
// 		}
// 	}

// }

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i++;
		while (argv[1][i])
			i++;
		while (i >= 0)
		{
			while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'
					|| argv[1][i] == '\0'))
				i--;
			end = i;
			while (i >= 0 && argv[1][i] && argv[1][i] != ' '
				&& argv[1][i] != '\t')
				i--;
			start = i + 1;
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			if (i >= 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}