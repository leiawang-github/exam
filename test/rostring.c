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

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int temp;
    t_list *cur;

    cur = lst;
    while (lst != NULL && lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0 )
        {
            temp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = temp;
            lst = cur;
        }
        else
            lst = lst->next;
    }
    return (cur);
}


void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *cur = begin_list;

    while (cur != NULL)
    {
        (*f)(cur->data);
        cur = cur ->next;
    }
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (*begin_list == NULL || begin_list == NULL)
        return;
    
    t_list *cur = *begin_list;

    if (cmp(cur->data, data_ref)== 0)
    {
        *begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list,data_ref,cmp);
    }
    else 
        ft_list_remove_if(&cur->next, data_ref,cmp);

}