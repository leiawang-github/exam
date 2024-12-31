// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);

#include <string.h>
#include <stdio.h>

 size_t	ft_strcspn(const char *s, const char *reject)
 {
    int i = 0;
    int  j;

    while (s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (s[i] == reject[j])
                return(i);
            j++;
        }
        i++;  
    }
    return (i);
 }


int main()
{
   char * str = "heyou";

   char *reject = "asde";

   printf("%lu", ft_strcspn(str, reject));
}