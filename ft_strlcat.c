#include "libft.h"

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

unsigned int    ft_strlcat(char *dest, const char *src, unsigned int size)
{
    unsigned int     i;
    unsigned int     dest_len;
    unsigned int     src_len;

    i = 0;
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (dest_len > size - 1)
        return (src_len + size);
    else
    {
        while (dest_len < size - 1 && src[i] != 0)
        {
            dest[dest_len] = src[i];
            dest_len++;
            i++;
        }
    }
    return (dest_len);
}