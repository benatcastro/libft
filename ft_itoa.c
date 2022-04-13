/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:39:37 by bena              #+#    #+#             */
/*   Updated: 2022/04/14 01:16:20 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

size_t ft_intlen(int n);
char	ft_getdigit(long nbr, int digit);

char	*ft_itoa(int n)
{
	long	nbr; 
	char	*str;
	size_t	i;
	size_t	int_len;

	nbr = n;
	i = 0;
	int_len = ft_intlen(nbr);
	if(!(str = malloc(ft_intlen(nbr) + 1)))
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		i++;
		nbr *= -1;
		int_len++;
		printf("str: %s\n", str);
	}
	while (i < ft_intlen(nbr))
	{
		str[i] = ft_getdigit(nbr, i);
		i++;
	}
	return(str);
}

size_t ft_intlen(int n)
{
	size_t	counter;
	size_t	multiplier;

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
	//printf("%ld", counter);
	return (counter);
}

char	ft_getdigit(long nbr, int digit)
{
	size_t	i;
	char	*digits;
	digits = malloc(ft_intlen(int)nbr);
	i = 0;
	digit += 1;
	nbr /= ft_power(10 , ft_intlen((int)nbr) - digit);
	// printf("intlen %ld\n", ft_intlen((int)nbr) - nbr);
	if (nbr > 10)
		nbr %= 10;
	digits[i] = nbr;
	i++;
	printf("digit %ld\n", nbr);
	return (nbr + '0');
}