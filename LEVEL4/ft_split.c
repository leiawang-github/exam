#include <stdlib.h>
#include <stdio.h>

// 计算字符串的单词数量
char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int wc = 0;

    // 计算字符串中的单词数
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i]) // 找到一个单词
            wc++;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
    }

    // 为单词数组分配内存
    char **out = (char **)malloc(sizeof(char *) * (wc + 1));
    i = 0;

    // 复制每个单词
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i; //j设置为单词开头
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        if (i > j)
        {
            out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
            // 复制单词到输出数组
            int m = 0;
            while (j < i)
                out[k][m++] = str[j++];
            out[k][m] = '\0'; // 结束字符串
            k++;
        }
    }
    out[k] = NULL; // 结束符
    return out;
}

// 测试 ft_split 函数
int main()
{
    char str[] = "Hello    world  \tThis is  a test\n";
    char **result = ft_split(str);

    // 输出分割后的单词
    int i = 0;
    while (result[i])
    {
        printf("Word %d: %s\n", i + 1, result[i]);
        free(result[i]); // 释放每个单词的内存
        i++;
    }

    free(result); // 释放最终的数组内存
    return 0;
}
