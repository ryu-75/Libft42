/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:22:38 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/12 18:36:43 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(long n, char *s, int *i)
{
	if (n > 9)
	{
		ft_putnbr(n % 10, s, i);
		ft_putnbr(n / 10, s, i);	
	}
	else 
		s[(*i)++] = n + '0';
}

static size_t	ft_countnum(long long n)
{
	int	res;

	res = 0;
	if (n < 0)
		res++;
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
	int	neg;
	int	i;
	long	nbr;

	nbr = n;
	i = 0;	
	neg = 0;
	count = ft_countnum(nbr);
	tab = malloc(sizeof(char) * count + 1);
	if (!tab)
		return (NULL);
	if (n == 0)
		tab[i++] = '0';	
	if (n < 0)
	{
		neg = 1;
		nbr = -nbr;
	}
	if (neg == 1)
		tab[i++] = '-';
	ft_putnbr(nbr, tab, &i);
	tab[i] = '\0';
	return (tab);
}

int	main(void)
{
	
	int	n = -2147483648;
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
