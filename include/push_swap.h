#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
# include <stdbool.h>

#define INT_MAX		2147483647
#define INT_MIN		(-INT_MAX-1)

typedef struct index
{
    int i;
    int j;
}       t_index;


typedef struct stack
{
    int             data;
    struct stack    *next;
}                   t_stack;


/* ft_split */
int     count_strings(char const *s, char c);
char    *malloc_strings(const char *s, char c);
char    **ft_split(char const   *s, char c);
void    free_args(char **args);
int     ft_isdigit(int  c);
bool    length_check(char **argv);
long long	ft_atoi(const char *str);
int     *argv_to_tab(int argc, char **argv);
bool    int_check(int *tab, int argc);
void    sa(t_stack *a, int prm);
void    sb(t_stack *b, int prm);
void    ss(t_stack *a, t_stack *b, int prm);
void    ra(t_stack **a, int prm);
void    rb(t_stack **b, int prm);
void    rr(t_stack **a, t_stack **b, int prm);
void    rra(t_stack **a, int prm);
void    rrb(t_stack **b, int prm);
void    rrr(t_stack **a, t_stack **b, int prm);


/* main.c */
void    exit_error_msg(char *s);
bool    ft_space(char c);
int     total_args(char **args, char **argv);
bool    input_check(int argc, int *tab, char **argv);
bool    is_sorted(int *tab, int argc);


/* fill_stack*/
void    fill_stack(t_stack **a, int argc, char **argv);
/*  inputchaeck*/
bool    valid_int(int   argc, char **argv, t_index *index);

/* parsing */
char    **ddd_parsing(int argc, char **argv);
void    free_dddarray(char ***tab);
int     total_rows(char ***tab);
char    **dd_parsing(char ***tab);



/* ft_strdup */
int ft_strdup(const char *s);
int _strlen(const char *s);


#endif