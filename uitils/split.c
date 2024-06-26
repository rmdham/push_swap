#include    "../include/push_swap.h"

int count_strings(char const *s, char c)
{
    int i;
    int str_count;

    i = 0;
    str_count = 0;
    if (s[i] == c)
        str_count--;
    while (s[i])
    {
        if (s[i] == c && s[i + 1] != c && s[i + 1])
            str_count++;
        i++;
    }
    str_count++;
    return (str_count);
}
char    *malloc_strings(const char *s, char c)
{
    char    *word;
    int     i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    word = (char *)malloc(sizeof(char) * (i + 1));
    if (!word)
        return  (NULL);
    i = 0;
    while (s[i] && s[i] != c)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_split(char const   *s, char c)
{
    int     words;
    int     i;
    char    **tab;

    if (!s)
        return  (NULL);
    words = count_strings(s, c);
    tab = (char **)malloc(sizeof(char *) * (words + 1));
    if (!tab)
        return (NULL);
    i = 0;
    while (*s)
    {
        while (*s && *s == c)
            s++;
        if (*s && *s != c)
        {
            tab[i] = malloc_strings(s, c);
            i++;
            while (*s && *s !=c)
                s++;
        }
    }
    tab[i] = NULL;
    return  (tab);
}

void    free_args(char **args)
{
    int i;

    i = 0;
    while (args[i])
    {
        free(args[i]);
        i++;
    }
    free(args);
}