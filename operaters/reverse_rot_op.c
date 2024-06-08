#include    "../include/push_swap.h"

void	ft_lstadd_front(t_stack **ab, t_stack *new)
{
	if (!ab || !new)
		return ;
	new->next = *ab;
	*ab = new;
}

void    rra(t_stack **a, int prm)
{
    t_stack *current;
    t_stack *last;
    t_stack *prev;

    if (!(*a) || !(*a)->next)
        return  ;
        current = *a;
        prev = NULL;
        while (current->next != NULL)
        {
            prev = current;
            current = current->next;
        }
        last = current;
        prev->next = NULL;
        last->next = *a;
        *a = last;
        if (!prm)
            write(1, "rra\n", 4);
}

void    rrb(t_stack **b, int prm)
{
    t_stack *last;
    t_stack *current;

    current = *b;
    if (!(*b) || !(*b)->next)
        return ;
    while (current->next->next != NULL)
        current = current->next;
    last = current->next;
    current->next = NULL;
    last->next = *b;
    *b = last;
    if (!prm)
        write(1, "rrr\n", 4);
}

void    rrr(t_stack **a, t_stack **b, int prm)
{
	rra(a, 1);
	rrb(b, 1);
	if (!prm)
		write(1, "rrr\n", 4);
}