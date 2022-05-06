/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:21:38 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/06 17:23:00 by nlorion          ###   ########.fr       */
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
		if (*s == '\0')
			return (tmp);
		s++;
	}
	if (*tmp != '\0')
		return (tmp);
	return (NULL);
}
/*
int     main(void)
{
    char    *t = "hello";

    printf("%s", ft_strrchr(t, 5));
    return (0);
}
*/
