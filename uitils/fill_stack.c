#include    "../include/push_swap.h"

int *argv_to_tab(int argc, char **argv)
{
    int     i;
    int     *tab;
    int     j;
    t_index *index;

    index = malloc(sizeof(t_index));
    if (!index)
        return (NULL);
    i = 0;
    j = 0;
    index->i = 0;
    index->j = 0;
    if (!length_check(argv) || !valid_int(argc, argv, index))
    {
        free_args(argv);
        free(index);
        exit_error_msg("Error\n");
    }
    tab = malloc(sizeof(int *) * (argc));
    if (!tab)
        return  (NULL);
    while (i < argc)
    {
        tab[j] = ft_atoi(argv[i]);
        i++;
        j++;
    }
    free(index);
    return  (tab);
}

void    fill_stack(t_stack **a, int argc, char **argv)
{
    int     i;
    int     *tab;
    t_stack *new_node;

    i = argc - 1;
    tab = argv_to_tab(argc, argv);
    input_check(argc, tab, argv);
    while (i >= 0)
    {
        new_node = malloc(sizeof(t_stack));
        if (NULL == new_node)
            exit(1);
        new_node->data = ft_atoi(argv[i]);
        new_node->next = *a;
        *a = new_node;
        i--;
    }
    free(tab);
}