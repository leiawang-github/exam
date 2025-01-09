// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

#include  <stdio.h>
#include  <string.h>

char	*ft_strpbrk(const char *str1, const char *str2)
{
    int i = 0;

    while (str1[i] != '\0') {
       int j = 0;
        while (str2[j] != '\0') {
            if (str1[i] == str2[j]) {
                return (char *)&str1[i]; 
            }
            j++;
        }
        i++; 
    }
    return (NULL);
}

int main()
{
    char *str1 = "hello";
    char *str2 = "kl";

    printf("%s\n", ft_strpbrk(str1, str2));
     printf("%s", strpbrk(str1, str2));
}