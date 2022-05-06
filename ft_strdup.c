/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:24:50 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/06 18:08:21 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*copy;

	len = 0;
	while (str[len])
		len++;
	copy = (char *)malloc(sizeof(*str) * (len + 1));
	if (!copy)
		return (NULL);
	while (*str)
		*copy++ = *str++;
	*copy = '\0';
	return (copy);
}
/*
int     main (void)
{
    char    s1[20];
    char    s2[20] = "Bonjour";

    printf("%s\n", ft_strdup(s2));
}
*/
