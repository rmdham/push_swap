#include "../include/push_swap.h"

void    ra(t_stack **a, int prm)
{
    t_stack *tmp;
    t_stack *last;

    if (*a && (*a)->next)
    {
        tmp = *a;
        *a = (*a)->next;
        last = tmp;
        while (last->next)
            last = last->next;
        last->next = tmp;
        tmp->next = NULL;
        if (!prm)
            write(1, "ra\n", 3); 
    }
}

void    rb(t_stack **b, int prm)
{
    t_stack *tmp;
    t_stack *last;

    if (*b && (*b)->next)
    {
        tmp = *b;
        *b = (*b)->next;
        last = tmp;
        while (last->next)
            last = last->next;
        last->next = tmp;
        tmp->next = NULL;
        if (!prm)
            write(1, "rb\n", 3); 
    }
}

void    rr(t_stack **a, t_stack **b, int prm)
{
    ra(a, 1);
    rb(b, 1);
    if (!prm)
        write(1, "rr\n", 3); 
}