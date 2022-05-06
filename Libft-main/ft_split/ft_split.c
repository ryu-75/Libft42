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

int     ft_findchar(char c, char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (c == str[i])
            return (1);
        i++;
    }
    return (0);
}

char    **ft_split(char const *str, char c)
{
    int     i;
    int     size;
    char    **tab;
    char    *s;
    
    s = (char*)str;
    i = 0;
    size = ft_strlen(s);
    tab = malloc((size + 1) * sizeof(char*));
    while (i <= size)
    {
        tab[i] = malloc((size + 1) * sizeof(char));
        i++;
    }
    i = 0;

    int     x;
    int     y;
    
    x = 0;
    y = 0;
    while (s[i])
    {
        while (ft_findchar(s[i], c) == 1 && s[i])
            i++;
        while (ft_findchar(s[i], c) == 0 && s[i])
        {
            tab[x][y] = s[i];
            y++;
            i++;
        }
        if (tab[x][y] == '\0')
            y = 0;
        if (tab[x][y] != '\0')
            x++;
    }
    tab[x] = 0;
    return (tab);
}
int     main(void)
{
    char    *s = "bonjour, tu, vas, bien,";
    char    t = ',';
    int     i;
    char    **tab;

    tab = ft_split(s, t);

    i = 0;
    while (tab[i] != 0)
    {
        printf("%s\n", tab[i]);
        i++;
    }
    
    return (0);
}