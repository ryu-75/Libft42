#include "libft.h"

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

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

char    *ft_strnstr(const char *max, const char *min, unsigned int len)
{
    int    i;
    unsigned int    minlen;
    i = 0; 
    
    if (0 == (minlen = ft_strlen((char*)min)))
        return ((char *)max);
    while (i <= (int)(len-minlen))
    {
        if (min[0] == max[0] && (0 == strncmp(max, min, minlen)))
            return ((char *)max);
        i++;
        max++;
    }
    return (NULL);
}