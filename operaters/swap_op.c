#include "../include/push_swap.h"

void    sa(t_stack *a, int prm)
{
    int tmp;

    if (a && a->next)
    {
        tmp = a->data;
        a->data = a->next->data;
        a->next->data = tmp;
        if (!prm)
            write(1, "sa\n", 3); 
    }
}


void    sb(t_stack *b, int prm)
{
    int tmp;

    if (b && b->next)
    {
        tmp = b->data;
        b->data = b->next->data;
        b->next->data = tmp;
        if (!prm)
            write(1, "sb\n", 3); 
    }
}


void    ss(t_stack *a, t_stack *b, int prm)
{
    sa(a, 1);
    sb(b, 1);
    if (!prm)
        write(1, "ss\n", 3); 
}