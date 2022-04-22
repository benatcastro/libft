/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becastro <becastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:39:37 by bena              #+#    #+#             */
/*   Updated: 2022/04/22 06:23:37 by becastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_makearr(char *str, long nbr);

char	*ft_itoa(int n)
{
	long	nbr;
	char	*str;
	size_t	int_len;

	nbr = n;
	if (nbr == -2147483648)
		return (str = ft_strdup("-2147483648"));
	else if (n == 0)
		return (str = ft_strdup("0"));
	int_len = ft_intlen(nbr) + 1;
	if (nbr < 0)
	{
		str = malloc((int_len));
		if (!(str))
			return (NULL);
		str[0] = '-';
		nbr *= -1;
	}
	else
		str = malloc((int_len));
	if (!(str))
		return (NULL);
	ft_makearr(str, nbr);
	return (str);
}

size_t	ft_intlen(int n)
{
	size_t			counter;
	unsigned long	multiplier;

	counter = 0;
	if (n < 0)
	{
		n *= -1;
		counter++;
	}
	else if (n == 0)
		return (1);
	multiplier = 1;
	while (multiplier <= (size_t)n)
	{
		counter++;
		multiplier *= 10;
	}
	return (counter);
}

char	ft_getdigit(long nbr, int digit)
{
	digit += 1;
	nbr /= ft_power(10, ft_intlen((int)nbr) - digit);
	if (nbr >= 10)
		nbr %= 10;
	return (nbr + '0');
}

void	ft_makearr(char *str, long nbr)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (str[0] == '-')
		i++;
	while (j < ft_intlen(nbr))
	{
		str[i] = ft_getdigit(nbr, j);
		i++;
		j++;
	}
	str[i] = '\0';
}
