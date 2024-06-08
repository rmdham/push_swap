#include    "../include/push_swap.h"

void    exit_error_msg(char *s)
{
    while (*s)
        write(2, s++, 1);
    exit(1);
}

bool    ft_space(char c)
{
    return (c == ' ' || (c >= 9 && c <= 13));
}

int total_args(char **args, char **argv)
{
    int i;
    int j;

    i = 1;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j] && ft_space(argv[i][j]))
            j++;
        if (argv[i][j] == '\0')
        {
            free_args(args);
            exit_error_msg("Error\n");
        }
        i++;
    }
    i = 0; 
    while (args[i])
        i++;
    return (i);
}