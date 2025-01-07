// Assignment name  : inter
// Expected files   : inter.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.

// The display will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Examples:

// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $

#include <unistd.h>

// int	scan(char *str, char c, int i) //i 是 str的字符串长度 + 1； 这个函数判断在str里有没有字符c的存在，有就返回0，没有就返回1；
// {
// 	while (i >= 0)
// 	{
// 		if (str[i] == c)
// 			return (0); // 在索引前面存在了查找的字符
// 		i--;
// 	}
// 	return (1);
// }

// void	inter(char *str1, char *str2)
// {
// 	int i = 0;
// 	int	j;

// 	while(str1[i])
// 	{
// 		j = 0;
// 		while(str2[j])
// 		{
// 			if (str1[i] == str2[j])
// 			{
// 				if (scan(str1, str1[i], i - 1) == 1)
// 					write(1, &str1[i], 1);
// 				break;
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// }

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    unsigned char seen[256] = {0}; // 出现过

    if (ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    if (!seen[av[1][i]]) //没有出现过
                    {
                        write(1, &av[1][i], 1);
                        seen[av[1][i]] = 1;
                    }
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}