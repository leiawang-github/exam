
#include <stdio.h>

int	ft_strlen(char *str)
{
	int strlen;

	strlen = 0;
    while (str[strlen] != '\0')
	{
		strlen++;
	} 
	return (strlen);

}

int main(void)
{
	int length = ft_strlen("computer");
	printf("Length: %d\n", length);
}


// #include <stdio.h>

// int	ft_strlen(char *str)
// {
// 	int i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return i;
// }

// int main(void)
// {
// 	int length = ft_strlen("beautiful");
// 	printf("the length is: %d\n", length);
// }