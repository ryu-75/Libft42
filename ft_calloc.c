/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:59:02 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/06 17:57:17 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char		*str;

	str = (char *)s;
	i = 0;
	while (n != i)
	{
		str[i] = c;
		++i;
	}
	return (s);
}   

void    ft_bzero(void *s, unsigned int n)
{   
    memset((void *)s, 0, (unsigned int)n);
}
*/
void	*ft_calloc(unsigned int nmemb, size_t size)
{
	int	*ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ptr = malloc(nmemb * size);
	if (ptr)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
