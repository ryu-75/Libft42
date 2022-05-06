/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:24:50 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/05 19:25:00 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strdup(const char *str)
{
    int    len;  
    char    *copy;

    len = 0;
    while (str[len])
        len++;
    copy = (char *)malloc(sizeof(*str) * (len+1));
    if (!copy)
        return (NULL);
    while (*str)
        *copy++ = *str++;
    *copy = '\0';
    return (copy);
}
/*
int     main (void)
{
    char    s1[20];
    char    s2[20] = "Bonjour";

    printf("%s\n", ft_strdup(s2));
}
*/
