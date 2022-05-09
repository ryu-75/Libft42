/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:54:02 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/09 16:12:45 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*sc;
	char	*c;
	size_t	llen;

	sc = (char *)big;
	c = (char *)little;
	if (*c++ != '\0')
	{
		llen = ft_strlen(little);
		while (strncmp(big, little, llen) != 0)
		{	
			while (sc != c)
			{
				if (*sc++ == '\0' || len-- < 1)
					return (NULL);
			}
			if (len > llen)
				return (NULL);
			if (*sc == 0 || *c == 0)
				return ((char *)big);
			big--;
		}
	}
	return ((char *)big);
}
/*
int	main(void)
{
	char	haystack[30] = "aaabcabcd";
	char	needle[10] = "aabc";
	//char	*empty = (char *)"";

	printf("%s\n", ft_strnstr(haystack, "abcd", 9));	// 10
	//printf("%s\n", ft_strnstr(haystack, "c", -1)); 	// 4
	//printf("%s\n", ft_strnstr(haystack, needle, -1));	// 2
}
*/
