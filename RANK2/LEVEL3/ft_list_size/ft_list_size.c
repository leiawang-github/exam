// Assignment name  : ft_list_size
// Expected files   : ft_list_size.c, ft_list.h
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the number of elements in the linked list that's
// passed to it.

// It must be declared as follows:

// int	ft_list_size(t_list *begin_list);

// You must use the following structure, and turn it in as a file called
// ft_list.h:

#include <stdlib.h>
#include <stdio.h>

typedef struct    s_list 
{
    struct s_list *next;
    int           data;
}                 t_list;

t_list *new_node(int data)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (new_node == NULL)
        return (NULL);
    new_node ->data = data;
    new_node ->next = NULL;
    return new_node;
}

int	ft_list_size(t_list *begin_list)
{
    t_list *current = begin_list;
    int count = 0;

    while(current != NULL)
    {
        count++;
        current = current -> next;
    }
    return (count);
}

int main()
{
    t_list *one = new_node(10);
    t_list *two = new_node(20);
    t_list *three = new_node(30);

    one->next = two;
    two->next = three;

    int size = ft_list_size(one);
    printf("%d", size);

}