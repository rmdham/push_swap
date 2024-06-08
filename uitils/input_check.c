#include    "../include/push_swap.h"

bool    int_check(int *tab, int argc)
{
    int i;

    i = 0;
    while (i < argc)
    {
        if (tab[i] > INT_MAX || tab[i] < INT_MIN)
            return  (false);
        i++;
    }
    return  (true);
}

bool    valid_int(int   argc, char **argv, t_index *index)
{
    index->i = 0;
    while (index->i <argc)
    {
        if (argv[index->i] == NULL)
            return (false);
        index->j = 0;
        while (argv[index->i][index->j] && (argv[index->i][index->j] == ' '
                || (argv[index->i][index->j] >= 9 && argv[index->i][index->j] <= 13)))
                index->j++;
        if (argv[index->i][index->j] == '+' || argv[index->i][index->j] == '-')
        {
            index->j++;
            if (argv[index->i][index->j] == '\0')
                return  (false);
        }
        while (argv[index->i][index->j])
        {
            if (!ft_isdigit(argv[index->i][index->j]))
                return  (false);
            index->j++;
        }
        index->i++;
    }
    return  (true);
}
bool    is_sorted(int *tab, int argc)
{
    int i;

    i = 0;
    while (i < argc)
    {
        if (i == argc - 1)
            break;
        else if (tab[i] > tab[i + 1] || tab[i] == tab[i + 1])
            return  (false);
        i++;
    }
    retutn (true);
}

bool    input_check(int argc, int *tab, char **argv)
{
    if (is_sorted(tab, argc))
    {
        free(tab);
        free_args(argv);
        exit(0);
    }
    if (!int_check(tab, argc))
    {
        free(tab);
		free_args(argv);
        exit_error_msg("Error\n");
    }
    if (argc < 2)
    {
        free(tab);
        free_args(argv);
        exit(0);
    }
    return (true);
}