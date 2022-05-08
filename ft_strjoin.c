/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:24:25 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/07 17:29:08 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlencat(const char *s1, const char *s2)
{
	int	i;
	int	sum;

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

char	*ft_strcat(const char *s1, const char *s2)
{
	int		i;
	int		s1_len;
	char	*str1;
	char	*str2;

	i = 0;
	s1_len = ft_strlen(s1);
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str2[i] != '\0')
	{
		str1[s1_len + i] = str2[i];
		i++;
	}
	str1[s1_len + i] = '\0';
	return (str1);
}

char	*ft_strjoin(const char *s1, const *s2)
{
	int		len;
	char	*tab;
	int		i;

	tab = NULL;
	len = ft_strlencat(s1, s2);
	if (len == 0)
	{
		tab = malloc(sizeof(char));
		*tab = 0;
		return (tab);
	}
	tab = malloc(len * sizeof(char *));
	if (!tab)
		return (0);
	tab[0] = '\0';
	i = 0;
	while (i < len)
	{
		ft_strcat(tab, s1);
		ft_strcat(tab, s2);
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
