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
	char	*sc;
	char	*c;
	size_t	slen;

	sc = (char *)big;
	c = (char *)little;
	if (*c++ != '\0')
	{
		slen = ft_strlen(little);
		while (strncmp(big, little, slen) != 0)
		{
			while (sc != c)
			{
				if (*sc++ == '\0' || len-- < 1)
					return (NULL);
			}
			if (len > slen)
				return (NULL);
		}
		sc--;
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
