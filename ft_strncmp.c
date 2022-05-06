#include "libft.h"

int     ft_strncmp(unsigned char *s1, unsigned char *s2, int n)
{
    int     i;

    i = 0;
    while (s2[i] != '\0')
    {
        if (s1[i] == '\0' || s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    while (n > i)
    {
        if (s1[i] == '\0' || s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1 - s2);
}