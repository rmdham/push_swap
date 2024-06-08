#include    "../include/push_swap.h"

int ft_isdigit(int  c)
{
    if (c >= '0' && c <= '9')
        return  (1);
    return  (0);
}

int _strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

bool    length_check(char **argv)
{
    int i;
    int length;

    i = 0;
    while (argv[i])
    {
        length = ft_strlen(argv[i]);
        if ((length == 10 && ft_atoi(argv[i]) > 2147483647LL) || 
                (length == 10 && ft_atoi(argv[i] < -2147483648LL)))
            return (false);
        if (length > 10)
            return  (false);
        i++;
    }
    return (true);
}

long long	ft_atoi(const char *str)
{
	long long	i;
	long long	sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (!str)
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = (result * 10) + (str[i++] - '0');
    if (result * sign > INT_MAX || result * sign < INT_MIN)
        exit_error_msg("Error\n");
	return (result * sign);
}
