/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:06:46 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/07 17:34:03 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	ft_strcpy(dst, src);
	srclen = ft_strlen(src);
	if (srclen + 1 < size)
	{
		memcpy(dst, src, srclen + 1);
	}
	else if (size != 0)
	{
		memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (srclen);
}
/*
int	main(void)
{
	char	str[100];
	char	*test = "bonjour";

	printf("%ld", ft_strlcpy(str, test, 100));
}
*/
