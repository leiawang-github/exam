// Assignment name  : ft_atoi_base
// Expected files   : ft_atoi_base.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str (base N <= 16)
// to an integer (base 10) and returns it.

// The characters recognized in the input are: 0123456789abcdef。
// 意思是不会乱输入超过这些字符的str或者char
// Those are, of course, to be trimmed according to the requested base. For
// example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

// Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

// Minus signs ('-') are interpreted only if they are the first character of the
// string.

// Your function must be declared as follows:

// int	ft_atoi_base(const char *str, int str_base);

#include <stdio.h>
char ft_tolower(char c)
{
    if ('A' <= c && c <= 'Z')
        c = c + 32;
    return (c);
}

//处理str中的每一位digit，看其是否满足制定的base要求，如果满足，输出这个char对应的数字，如果
//不符合就返回-1

int char_into_digit(char c, int str_base)
{
    int max_digits ;

    if (max_digits <= 10)
        max_digits = str_base - 1 + '0'; //能得出最大可能数值9
    else
        max_digits = str_base - 10 -1 + 'a'; //能得出最大可能数值15
    if (c >= '0' && c <= '9' && c <= max_digits)
        c = c - '0';
    else if (c >= 'a' && c <= 'f' && c <= max_digits)
        c = c + 10 - 'a';
    else 
        return (-1);
    return (c);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    int digit;

    if (str == NULL || str_base < 2 || str_base > 16)
        return (0);
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while(*str)
    {
        digit = char_into_digit(ft_tolower(*str), str_base);
        if (digit == -1) // 说明自写函数出现了错误
            break;
        result = result * str_base + digit;
        str++;
    }
    return(result * sign);
}

int main()
{
    printf("%d", ft_atoi_base("-123ef", 5));
}