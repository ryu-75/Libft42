/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:34:28 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/10 13:00:05 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <mcheck.h>
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*tab;
	size_t		i;
	size_t		j;
	size_t		strlen;

	strlen = ft_strlen(s);
	tab = NULL;
	tab = (char *)malloc(sizeof(*s) * (len + 1));
	if (start >= strlen)
	{
		tab = malloc(sizeof(char));
		*tab = 0;
		return (tab);
	}
	if (strlen < (start + len))
		len = strlen - start;
	if (*s == 0)
		return (NULL);
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			tab[j] = s[i];
			j++;
		}
		i++;
	}
	tab[j] = '\0';
	return (tab);
}
/*
int	main(void)
{
	printf("%s", ft_substr("tripouille", 0, 42000));
}
*/
