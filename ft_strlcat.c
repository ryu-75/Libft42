/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:46:57 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/06 16:48:59 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int     i;
	unsigned int     dest_len;
	unsigned int     src_len;
	
	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len > size - 1)
		return (src_len + size);
	else
	{
		while (dest_len < size - 1 && src[i] != 0)
		{	
			dest[dest_len] = src[i];
			dest_len++;
			i++;
		}
	}
	return (dest_len);
}
