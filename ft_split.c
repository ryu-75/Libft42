/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:58:15 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/07 18:35:07 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	freeTab(char **str)
{
	while (*str != NULL)
		free(*str++);
	free(str);
}

int	ft_strsearch(char const *s, char const c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_split2(char const *s, char const c, char **tab)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (*s != '\0')
	{
		while (ft_strsearch(&c, s[i]) == 0 && s[i])
			i++;
		while (ft_strsearch(&c, s[i]) == 1 && s[i])
		{
			tab[j][k] = s[i];
			k++;
			i++;
		}
		if (tab[j][k] == '\0')
			k = 0;
		if (tab[j][k] != '\0')
			j++;
	}
	tab[j] = 0;
}

char	**ft_split(char const *s, char const c)
{
	int		i;
	int		len;
	char	**tab;

	i = 0;
	len = ft_strlen(s);
	tab = malloc((len + 1) * sizeof(char *));
	while (i <= len)
	{
		tab[i] = malloc((len + 1) * sizeof(char));
		i++;
	}
	if (!tab)
		return (NULL);
	i = 0;
	ft_split2(s, c, tab);
	freeTab(tab);
	return (tab);
}
/*
int main(void)
{
   // char    **tab = ft_split("  tripouille  42  ", ' ');
	char	**str = split("  tripouille  42  ", ' ');
    while (*str)
        printf("%s", *str++);
    return (0);
}
*/
