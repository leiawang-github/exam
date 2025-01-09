#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i = 1;

    if (ac == 2)
    {
        int number = atoi(av[1]);

        if (number == 1)
            printf("1");
        while(number >= 2) //这个循环条件很关键，小于2没有意义
        {
            i++;
            if(number % i == 0)
            {
                printf("%i",i);
                if (number == i)
                    break;
                printf("*");
                number = number / i;
                i = 1;
            }
             
        }
        
    }
    printf("\n");
}