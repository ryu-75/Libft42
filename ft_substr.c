/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:34:28 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/07 17:41:56 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*tab;
	unsigned int	i;
	char			*str;
	unsigned int	strlen;

	str = (char *)s;
	strlen = ft_strlen(str);
	if (start > strlen || len == 0)
		return (NULL);
	str += start;
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (len > (strlen - start))
		len = strlen - start;
	i = 0;
	while (i < len && str[i] != '\0')
	{
		tab[i] = *str;
		str++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
int	main(void)
{
	char	*dst = "hello";

	printf("%s", ft_substr(dst, 0, 2));
}
*/
