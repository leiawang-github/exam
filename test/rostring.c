#include <stdio.h>
#include <unistd.h>

void firstword(char *start, char *end)
{
    while(start < end)
    {
        write(1,start,1);
        start++;
    } 
}

int main(int ac, char **av)
{
    char *str;
    char * f_w_s;
    char * f_w_e;
   
    if (ac == 2)
    {
        str = av[1];
        while(*str== ' ' || *str == '\t')
            str++;
        f_w_s = str;
        while (*str && (*str!= ' ' && *str != '\t'))
            str++;
        f_w_e = str;
        while(*str== ' ' || *str == '\t')
            str++;
        if(*str)
        {
            while (*str)
            {
                if (*str!= ' ' && *str != '\t')
                {
                    while(*str == ' ' || *str == '\t')
                        str++;
                    if(*str)
                        write(1, " ", 1);
                }
                else
                {
                    write(1, str, 1);
                    str++;
                }
            }
            firstword(f_w_s,f_w_e);
        }
        
        }
        return (0);

}