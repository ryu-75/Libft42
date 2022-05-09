/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:54:02 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/09 19:23:04 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	//char	*sc;
	//char	*c;
	size_t	llen;

	//sc = (char *)big;
	//c = (char *)little;
	llen = ft_strlen(little);
	if (!llen)
		return ((char *)big);
	while (ft_strncmp(big, little, llen) != 0)
	{	
		while (*big != *little)
		{
			if (*big == '\0' || len-- < 1)
				return (NULL);
			big++;
		}
		if (*big == '\0' || *little == '\0')
			return ((char *)big);
		big++;
	}
	while (len >= llen)
	{
		len--;
		if (!ft_memcmp(big, little, llen))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	haystack[30] = "aaabcabcd";
	char	needle[10] = "aabc";
	char	*empty = (char *)"";

	//printf("%s\n", ft_strnstr(haystack, "aaabc", 5));	// 10
	printf("%s\n", ft_strnstr(haystack, "c", -1)); 	// 4
	//printf("%s\n", ft_strnstr(haystack, needle, -1));	// 2
}
*/
