// ## Subject

// ```
// Assignment name  : ft_list_foreach
// Expected files   : ft_list_foreach.c, ft_list.h
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a list and a function pointer, and applies this
// function to each element of the list.

// It must be declared as follows:

// void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

// The function pointed to by f will be used as follows:

// (*f)(list_ptr->data);

// You must use the following structure, and turn it in as a file called
// ft_list.h:

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;
// ```

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct    s_list
{
    struct s_list *next;
    char          *str;
}                 t_list;

t_list *creat_list(char *str)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (new_node == NULL)
        return (NULL);
    new_node -> str = str;
    new_node -> next = NULL;
    return (new_node);
}

void print_str_length(void *str)
{
    printf("Length: %zu\n", strlen((char *)str));
}

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *current = begin_list;
    while (current != NULL)
    {
        (*f) (current->str);
        current = current -> next;
    } 
}

int main()
{
    t_list *str1 = creat_list("hello");
    t_list *str2= creat_list("how are you");

    str1->next = str2;
   
    ft_list_foreach(str1, print_str_length);

    free(str1);
    free(str2);

}

