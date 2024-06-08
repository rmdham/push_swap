#include    "../include/push_swap.h"

void    sort_three(t_stack **a)
{
    int n1;
    int n2;
    int n3;

    n1 = (*a)->data;
    n2 = (*a)->next->data;
    n3 = (*a)->next->next->data;
    if (n1 > n2 && n2 < n3 && n1 < n3)
        sa(*a, 0);
    else if (n1 > n2 && n2 > n3)
    {
        sa(*a, 0);
        rra(a, 0);
    }
    else if (n1 > n2 && n3 > n2)
        ra(a, 0);
    else if (n1 < n2 && n2 > n3 && n3 > n1)
    {
        sa(*a, 0);
        ra(a, 0);
    }
    else if (n1 < n2 && n2 > n3 && n2 > n1)
        rra(a, 0);
}