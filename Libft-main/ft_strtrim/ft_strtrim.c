#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int     check_char(char *str, char c)
{
    int   i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (c == str[i])
          return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *s2)
{
    int     len_s1;
    char    *tab;
    int     i;

    tab = NULL;
    len_s1 = ft_strlen((char*)s1);
    i = 0;
    tab = malloc(len_s1 + 1 * (sizeof(char*)));
    if (!tab)
        return (0); 
    while (i < len_s1)
    {
        while (*s1 == s2[i] && check_char((char*)s1, s2[i]))
            s1++;
        i++;
    }
    i = 0;
    while (s1[len_s1] < s1[i])
    {
        while (s1[len_s1] == s2[i] && check_char((char*)s1, s2[i]))
            len_s1--;
        tab[i] = s1[i];
        i++;
    }
    return (tab); 
}

int     main(void)
{
    char    *s = "   bonjour  ";
    char    *t = " ";

    printf("%s\n", ft_strtrim(s, t));
    return (0);
}