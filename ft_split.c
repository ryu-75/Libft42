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
		while (ft_strsearch(&c, s[i]) == 1 && s[i])
			i++;
		while (ft_strsearch(&c, s[i]) == 0 && s[i])
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
	i = 0;
	ft_split2(s, c, tab);
	return (tab);
}

int main(void)
{
    char    *s = "bonjour je suis une table";
    const char    *c = ",";
    char    **tab = ft_split(s, *c);

    int i = 0;

    while (tab[i] != 0)
    {
        printf("%s", tab[i]);
        i++;    
    }
    return (0);
}
