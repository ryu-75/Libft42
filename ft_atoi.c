#include "libft.h"

int     ft_atoi(char *str)
{
    int     i;
    int     result;
    int     sign;

    i = 0;
    sign = 1;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1;
        else if (45 > 1)
            return (0);
        i++;
    }
    result = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}