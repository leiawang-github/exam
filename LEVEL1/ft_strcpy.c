// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// int main()
// {
// 	char *s1;
// 	char *s2 = "hey how are you";

// 	char *result = ft_strcpy(s1, s2);
// 	printf("We see the result as: %s", result);
// }

int main()
{
    char *s2 = "hey how are you";
    char *s1 = (char *)malloc((strlen(s2) + 1) * sizeof(char));
    if (s1 == NULL) {
        perror("Failed to allocate memory");
        return 1;
    }
    char *result = ft_strcpy(s1, s2);
    printf("We see the result as: %s\n", result);

    free(s1);
    return 0;
}