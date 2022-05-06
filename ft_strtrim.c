/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:12:38 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/03 18:39:47 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	set_ignore(char const *s1, char const c)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (c == s1[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	int		lens;
	int		i;

	i = 0;
	lens = ft_strlen(s1);
	tab = malloc((lens + 1) * sizeof(char *));
	if (!s1 || !set)
		return (0);
	while (set_ignore(set, *s1) == 1)
		s1++;
	while (lens && set_ignore(set, s1[i]) == 0)
	{
		tab[i] = s1[i];
		i++;
	}
	while (lens && set_ignore(set, s1[lens]) == 0)
	{
		tab[lens] = s1[lens];
		lens--;
	}
	return (tab);
}

int	main(void)
{
	char	*s;
	char	*t;

	s = "  hello  ";
	t = "o";
	printf("%s\n", ft_strtrim(s, t));
	return (0);
}