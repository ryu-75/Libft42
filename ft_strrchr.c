/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:21:38 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/07 22:42:57 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	ch;

	tmp = NULL;
	ch = c;
	while (*s)
	{
		if (*s == ch)
			tmp = (char *)s;
		else if (*s == '\0')
			return (tmp);
		s++;
	}
	if (*tmp != '\0')
		return (tmp);
	return (NULL);
}
/*
char	main(void)
{
	char	*s = "ltripouiel";
	
	printf("%s", ft_strrchr(s, 'z'));
}
*/
