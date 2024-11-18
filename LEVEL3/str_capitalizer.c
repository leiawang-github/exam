// Assignment name  : str_capitalizer
// Expected files   : str_capitalizer.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes one or several strings and, for each argument,
// capitalizes the first character of each word (If it's a letter, obviously),
// puts the rest in lowercase, and displays the result on the standard output,
// followed by a \n.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string. If a word only has one letter, it must be
// capitalized.

// If there are no arguments, the progam must display \n.

// Example:

// $> ./str_capitalizer | cat -e
// $
// $> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
// A First Little Test$
// $> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
// __second Test A Little Bit   Moar Complex$
//    But... This Is Not That Complex$
//      Okay, This Is The Last 1239809147801 But Not    The Least    T$
// $>

// 1. create tolower function and toupper function
// 2. in str, mark str[0] to uppercase using above function and all space+ 1 char uppercase using same funtion
// 3. all letters dont follow above sules goes to lowercase using 1 function

// #include <unistd.h>
// #include <stdio.h>

// int ft_tolower(int c)
// {
//     if ('A' <= c && c <= 'Z')
//         c = c + 32;
//     return (c);
// }

// int ft_toupper(int c)
// {
//     if ('a' <= c && c <= 'z')
//         c = c - 32;
//     return (c);
// }

// int main(int ac, char** av)
// {
//     int i = 0;

//     if (ac ==2)
//     {
//         while(av[1][i])
//         {
//             av[1][i] = ft_tolower(av[1][i]); // all into lowercase now
//             i++;
//         }
//         i = 0;
//         while (av[1][i])
//         {
//             if ('a' <= av[1][0] && av[1][0] <= 'z')
//                 av[1][0] = ft_toupper(av[1][0]);
//             else if((av[1][i] == '\t' || av[1][i] == '\n' || av[1][i] == ' ') && ('a' <= av[1][ i + 1] && av[1][i + 1] <= 'z'))
//                 av[1][i + 1] = ft_toupper( av[1][i + 1]);
//             write(1, &av[1][i], 1);
//             i++;
//         }
//     }
//     write(1,"\n", 1);
//     return (0);
// }

//BETTER WAY
#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            // 将当前字符变成小写
            if ('A' <= av[1][i] && av[1][i] <= 'Z')
                av[1][i] += 32;

            // 首字母大写
            if ((i == 0 || av[1][i - 1] == ' ' || av[1][i - 1] == '\t') &&
                ('a' <= av[1][i] && av[1][i] <= 'z'))
                av[1][i] -= 32;

            // 输出当前字符
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}

