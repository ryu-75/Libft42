/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:22:38 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/12 17:30:20 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countnum(size_t n)
{
	int	res;

	res = 0;
	if (n < 10)
		return (1);
	while (n != 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int	count;
	char	val;
	int	neg;
	int	i;

	i = 0;	
	neg = 0;
	val = 0;
	count = ft_countnum(n);
	tab = malloc(sizeof(char) * count + 1);
	if (n == 0)
		tab[i++] = '0';	
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (n != 10)
	{
		val = n % 10;
		if (val > 9)
			tab[i++] = (val - 9) + 48;
		else 
			tab[i++] = val + 48;
	}
	if (neg == 1)
		tab[i++] = '-';
	if (!tab)
		return (NULL);
	tab[i] = '\0';
	return (tab);
}

int	main(void)
{
	
	int	n = -5;
	/*
	int	count = ft_countnum(n);
	char	*tab;
	int	val;
	int	i = 0;

	val = 0;
	tab = malloc(sizeof(char) * count + 1);
	while (n != 0)
	{
		val = n;
		val %= 10;
		val /= 10;
		if (val > 9)
			tab[i++] = (val - 9) + 48;
		else
			tab[i++] = val + 48;
	}
	tab[i] = '\0';
	*/
	printf("%s", ft_itoa(n));
}
