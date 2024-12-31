#include <stdlib.h>
#include <stdio.h>

// 获取数字的字符长度
int nbrlen(int nbr)
{
    int len = 0;

    if (nbr == 0)
        return (1);
    if (nbr < 0)
        len++; // 负号占一位
    while (nbr != 0)
    {
        nbr /= 10;
        len++;
    }
    return (len);
}

// 计算绝对值
int ft_abs(int nbr)
{
    if (nbr < 0)
        return (-nbr);
    return (nbr);
}

// 将整数转换为字符串
char *ft_itoa(int nbr)
{
    int len = nbrlen(nbr);
    char *result = (char *)malloc((len + 1) * sizeof(char));
    if (!result)
        return (NULL);

    result[len] = '\0'; // 字符串结束符
    if (nbr == 0) // 处理特殊情况：0
    {
        result[0] = '0';
        return (result);
    }
    if (nbr < 0) // 处理负号
        result[0] = '-';

    while (nbr != 0)
    {
		len--;
		result[len] = ft_abs(nbr % 10) + '0'; // 取最后一位数字并转换为字符
        nbr /= 10;
    }
    return (result);
}

// 测试函数
int main()
{
    int nbr1 = 123;
    int nbr2 = -123;
    int nbr3 = 0;
    int nbr4 = -2147483648;

    printf("itoa(%d) = %s\n", nbr1, ft_itoa(nbr1));
    printf("itoa(%d) = %s\n", nbr2, ft_itoa(nbr2));
    printf("itoa(%d) = %s\n", nbr3, ft_itoa(nbr3));
    printf("itoa(%d) = %s\n", nbr4, ft_itoa(nbr4));

    return 0;
}
