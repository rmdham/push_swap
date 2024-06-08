#include "../include/push_swap.h"

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;
    int     arg_num;
    char    **args;

    a = NULL;
    b = NULL;
    args = dd_parsing(ddd_parsing(argc, argv));
    arg_num = total_args(args, argv);
    fill_stack(&a, arg_num, args);
    if (arg_num == 2 && a->data > a->next->data)
        sa(a, 0);
    else if (arg_num == 3)
        sort_three(&a);
    else if (arg_num == 4)
        

    
