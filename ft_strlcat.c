/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:07:26 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/07 18:55:08 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    unsigned int     i;
    unsigned int     dest_len;
    unsigned int     src_len;

    i = 0;
    dest_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (dest_len > size - 1)
        return (src_len + size);
    else
    {
        while (dest_len < size - 1 && src[i] != 0)
        {
            dst[dest_len] = src[i];
            dest_len++;
            i++;
        }
    }
    return (dest_len);
}

int	main(void)
{
	char	dst[50];
	char	*src;

	src = "bonjour";
	printf("%ld", ft_strlcat(dst, src, 20));
}
