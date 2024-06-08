#include    "../include/push_swap.h"

char    **ddd_parsing(int argc, char **argv)
{
    char    ***tab;
    int     i;

    tab = malloc(sizeof(char **) * (argc + 1));
    if (!tab)
        return  (NULL);
    i = 0;
    while (i < argc)
    {
        tab[i] = ft_split(argv[i + 1], ' ');
        i++;
    }
    tab[i] = NULL;
    return (tab)
}
void    free_dddarray(char ***tab)
{
    int i;
    int j;

    i = 0;
    while (tab[i])
    {
        j = 0;
        while (tab[i][j])
        {
            free(tab[i][j]);
            j++;
        }
        free(tab[i]);
        i++;
    }
    free(tab);
}

int total_rows(char ***tab)
{
    int i;
    int j;
    int count;

    i = 0;
    count = 0;
    while (tab[i])
    {
        j = 0;
        while (tab[i][j])
        {
            j++;
            count++;
        }
        i++;
    }
    return  (count);
}

char    **dd_parsing(char ***tab)
{
    char    **args;
    int     i;
    int     j;
    int     k;

    args = malloc(sizeof(char *) * (total_rows(tab) + 1));
    if (!args)
        return  (NULL);
    i = 0;
    k = 0;
    while (tab[i])
    {
        j = 0;
        while (tab[i][j])
        {
            args[k] = ft_strdup(tab[i][j]);
            j++;
            k++;
        }
        i++;
    }
    free_dddarray(tab);
    args[k] = NULL;
    return (args);
}