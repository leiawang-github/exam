// ## Subject

// ```
// Assignment name  : ft_list_remove_if
// Expected files   : ft_list_remove_if.c
// Allowed functions: free
// --------------------------------------------------------------------------------

// Write a function called ft_list_remove_if that removes from the
// passed list any element the data of which is "equal" to the reference data.

// It will be declared as follows :

// void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

// cmp takes two void* and returns 0 when both parameters are equal.

// You have to use the ft_list.h file, which will contain:

#include <stdlib.h>
#include <stdio.h>

typedef struct      s_list //定义了一个结构体
{
    struct s_list   *next;
    int              data;
}                   t_list;

t_list *create_node(int data) //在自定义的结构体里面创建了一个新节点
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

int cmp(int data1, void *data2)
{
    if (data1 == *(int *)data2)
        return 0;  // 如果两个数据相等，返回0
    else
        return 1;  // 如果两个数据不相等，返回1
}
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", lst-> data);  // 打印节点的数据
        lst = lst->next;
    }
    printf("NULL\n");
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return;
	
	t_list *current = *begin_list;

	if (cmp(current->data, data_ref)== 0)
	{
		*begin_list = current->next;
		free(current);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
    {
        current = *begin_list;
        ft_list_remove_if(&current->next, data_ref, cmp);
    }	
}

int main()
{
    // 创建链表节点并赋值
    t_list *node1 = create_node(1);
    t_list *node2 = create_node(1);
    t_list *node3 = create_node(3);
    t_list *node4 = create_node(2);

    // 构造链表
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    // 打印原始链表
    printf("Original list:\n");
    print_list(node1);

    // 删除链表中值为 2 的节点
    int data_to_remove = 2;
    ft_list_remove_if(&node1, &data_to_remove, cmp);

    // 打印删除节点后的链表
    printf("List after removal:\n");
    print_list(node1);

    // 释放内存
    free(node1);
    return 0;
}