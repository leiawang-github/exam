
// // Assignment name  : sort_list
// // Expected files   : sort_list.c
// // Allowed functions:
// // --------------------------------------------------------------------------------

// // Write the following functions:

// // t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

// // This function must sort the list given as a parameter, using the function
// // pointer cmp to select the order to apply, and returns a pointer to the
// // first element of the sorted list.

// // Duplications must remain.

// // Inputs will always be consistent.

// // You must use the type t_list described in the file list.h
// // that is provided to you. You must include that file
// // (#include "list.h"), but you must not turn it in. We will use our own
// // to compile your assignment.

// // Functions passed as cmp will always return a value different from
// // 0 if a and b are in the right order, 0 otherwise.

// // For example, the following function used as cmp will sort the list
// // in ascending order:

// // int ascending(int a, int b)
// // {
// // 	return (a <= b);
// // }
// #include <stdlib.h>
// #include <stdio.h>
// #include "list.h"

// t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
// {
//     int temp;
//     t_list *current = lst;

//     while (lst!= NULL && lst->next!= NULL)
//     {
//         if ((*cmp) (lst->data,lst->next->data) == 0)
//         {
//             temp = lst->data;
//             lst->data = lst->next->data;
//             lst->next->data = temp;
//         }
//         else 
//             lst = lst->next;
//     }
//     return (current);
// }

// int cmp(int a, int b)
// {
//     return (a < b);
// }

// t_list *create_node(int data)
// {
//     t_list *new_node = (t_list *)malloc (sizeof(t_list));
//     if (!new_node)
//         return NULL;

//     new_node -> data = data;
//     new_node -> next = NULL;
//     return new_node;    
// }

// void print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("%d -> ", lst->data);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }

// int main()
// {
//     //create nodes;
//     t_list *head = create_node(3);
//     t_list *node1 = create_node(1);
//     t_list *node2 = create_node(2);

//     //create strut;
//     head->next = node1;
//     node1->next = node2;

//     printf("original lst: \n");
//     print_list(head);

//     head = sort_list(head, cmp);

//     printf("Sorted lst:\n");
//     print_list(head);

//     free(head);
//     free(node1);
//     free(node2);
// }
#include <stdlib.h>
typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list *sort_list(t_list* lst, int (*cmp)(int, int)) {
    int swap;
    t_list *start;
    start = lst;

    while (lst != NULL && lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
	    {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = start;
        }
	else
		lst = lst->next;
    }
    return (start);
}