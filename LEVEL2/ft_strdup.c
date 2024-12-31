// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *result;
    int len = 0;
    int i = 0;
    
    while(src[len])
        len++;

    result = (char *)malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);
    
    while(i < len)
    {
        result[i] = src[i];
        i++;
    }
    result[i] ='\0';
    return (result);
}

int main()
{
    char src[] = "helloleia";

    char *result = ft_strdup(src);

    // if (!result)
    //     return (NULL);
    
    printf("%s", result);

    free(result);
}
