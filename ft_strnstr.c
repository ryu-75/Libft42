/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:54:02 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/06 17:31:27 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	minlen;

	i = 0;
	minlen = ft_strlen(little);
	if (0 == minlen)
		return ((char *)big);
	while (i <= (int)(len - minlen))
	{
		if (little[0] == big[0] && (0 == strncmp(big, little, minlen)))
			return ((char *)big);
		i++;
		big++;
	}
	return (NULL);
}
