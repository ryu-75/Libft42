#include "libft.h"

char    *ft_strchr (const char *p, int c)
{
    char    ch;

    ch = c;
    while (*p)
    {
        if (*p == ch)
            return ((char *)p);
        p++;
    }
    return (NULL);
}

int main(void)
{
    char    *t = "hello";

    printf("%s", ft_strchr(t));
    return (0);
}