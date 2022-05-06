#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
    if (n != 0)
    {
        const unsigned char *p1 = s1;
        const unsigned char *p2 = s2;

        while (n-- != 0)
        {
            if (*p1++ != *p2++)
                return (1);
        }
    }
    return (0);
}