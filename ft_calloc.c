#include "libft.h"

void    *ft_memset(void *s, int c , unsigned int n)
{
    unsigned int    i;
    char            *str;
    
    str = (char *)s;
    i = 0;
    while (n != i)
    {
        str[i] = c;
        ++i;
    }
    return (s);
}   

void    ft_bzero(void *s, unsigned int n)
{   
    memset((void *)s, 0, (unsigned int)n);
}

void    *ft_calloc(unsigned int nmemb, unsigned int size)
{
    int    *ptr;

    if (nmemb == 0 || size == 0)
    {
        nmemb = 1;
        size = 1;
    }
    ptr = malloc(nmemb * size);
    if (ptr)
        ft_bzero(ptr, nmemb * size);
    return (ptr);
}