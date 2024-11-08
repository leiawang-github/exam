// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;

	while (s[i] && reject[j])
	{
		while(reject[j])
		{
			if(s[i] != reject[j])
				i++;
			j++;
		}
		return (i + 1);
	}
	return (0);
}

int main()
{
	char *s = "hello world";
	char *ss = "l";

	int result = ft_strcspn(s, ss);

	printf("result: %d\n", result);
}