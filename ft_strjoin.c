/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:24:25 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/05 19:24:30 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return(i);    
}

int     ft_strlencat(char *s1, char *s2)
{
    int     i;
    int     sum;

    i = 0;
    sum = 0;
    while (s1[i] != '\0')
    {
        sum = ft_strlen(s1);
        i++;
    }
    sum += ft_strlen(s2);
    return (sum);
}

char    *ft_strcat(char *s1, char *s2)
{
    int     i;
    int     s1_len;

    i = 0;
    s1_len = ft_strlen(s1);
    while (s2[i] != '\0')
    {
        s1[s1_len + i] = s2[i];
        i++;
    }
    s1[s1_len + i] = '\0';
    return (s1);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    int     len;
    char    *tab;
    int     i;
    char    *str1;
    char    *str2; 

    str1 = (char*)s1;
    str2 = (char*)s2;
    tab = NULL;
    len = ft_strlencat(str1, str2);
    if (len == 0)
    {
        tab = malloc(sizeof(char));
        *tab = 0;
        return (tab);
    } 
    tab = malloc(len * sizeof(char*) * 500);
    if (!tab)
        return (0);
    tab[0] = '\0';
    i = 0;
    while (i < len) 
    {
        ft_strcat(tab, str1);
        if(i < len)
            ft_strcat(tab, str2);
        i++;
    }
    tab[len] = '\0';
    return (tab);
}
/*
int     main (int argc, char **argv)
{
    char    s1[] = "bonjour je suis la et ici tu me vois";
    char    s2[] = "1234";
    int     i = 0;

    if (argc >= 2)
        while (argv[i])
            printf("%s", ft_strjoin(argv[i++], s2));
    return (0);
}
*/
