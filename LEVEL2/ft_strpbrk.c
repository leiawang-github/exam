// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);

#include <stdio.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;

	while(s2[j])
	{
		while(s1[i])
		{
			if (s1[i] == s2[j])
				return (char *)&s1[i];
			i++;	
		}
		j++;
	}
	return (NULL);
}

int main()
{
	char *s1 = "abcdefgas";
	char *s2 = "ea";

	char *result = ft_strpbrk(s1, s2);
	printf("result is : %s\n", result);
}