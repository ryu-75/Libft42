/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:58:15 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/11 13:01:12 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freeTab(char **str)
{
	size_t	i;	

	i = 0;
	while (str[i] != NULL)
		free(str[i]);
		i++;
	free(str);
}

int	ft_countword(char const *s, char const set)
{
	size_t	i;
	size_t	len_s;
	size_t	word;

	i = 0;
	word = 0;	
	len_s = ft_strlen(s);
	while (s[i] != '\0')
	{
		if (s[i] == set && s[i + 1] != set)
			word++;
		i++;
	}
	word++;
	return (word);
}

char	*ft_writeword(char *dest, char *src, char const set)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (dest[i] != src[i] && src[i] != set)
		{
			dest[i] = src[i];
		}
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_splitword(char *s, char set)
{
	char	**tab;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	tab = malloc((len + 1) * sizeof(char));
	while (s[i] != '\0')
	{
		if (ft_writeword(&s[i + 1], &s[i], set) == 0)
			i++;
		if (ft_writeword(&s[i + 1], &s[i], set))
		{
			tab[i + 1] = &s[i];
		}
		i++;
	}
	return (tab);
}
/*
char	**ft_split(char const *s, char const c)
{
	char	**tab;
	size_t	len;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	len = ft_strlen(s);
	tab = malloc((len + 1) * sizeof(char));
	while (i <= len)
	{
		tab[i] = malloc((len + 1) * sizeof(char *));
		i++;	
	}
	i = 0;
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (ft_strsearch(&c, s[i]) && s[i])
			i++;
		while (ft_strsearch(&c, s[i]) && s[i])
		{
			tab[j][k] = s[i];
			i++;
			k++;
		}
		while (tab[j][k] == '\0')
			k = '\0';
		while (tab[j][k] != '\0')
			j++;
	}
	tab[i] = '\0';
	freeTab(tab);
	return (tab);
}
*/
int main(int argc, char **argv)
{
	/*
    	size_t	i;
	char	s = ',';
	i = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
        		printf("%s", *ft_split(argv[i], s));
			i++;
		}
	}
	*/
	char	*test = "bonjour, je suis, la";
	char	set = ',';

	printf("%s", *ft_splitword(test, set));	
    	return (0);
}

