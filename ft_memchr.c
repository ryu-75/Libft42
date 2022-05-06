#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    size_t     i;
    const char *s = (const char *)str;
    i = 0;
    while (i < n)
    {
        if (s[i] == c)
            return ((void *)&s[i]);
        i++;
    }
    return (NULL);
}