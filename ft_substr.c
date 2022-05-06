#include "libft.h"

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *tab;
    unsigned int    i;
    char    *str;
    unsigned int     strlen;

    str = (char*)s;
    strlen = ft_strlen(str);
    if (start > strlen || len == 0)
        return (NULL);
    str += start; 
    tab = (char*)malloc(sizeof(char) * (len + 1));
    if (len > (strlen - start))
        len = strlen - start;
    i = 0;
    while (i < len && str[i] != '\0')
    {
        tab[i] = *str;
        str++;
        i++;
    }
    tab[i] = '\0';
    return (tab);
}