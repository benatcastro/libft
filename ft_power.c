/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becastro <becastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:20:10 by bena              #+#    #+#             */
/*   Updated: 2022/04/14 17:00:41 by becastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

long ft_power(int base, int exp)
{
	int count;
	int	tmp;

	if (exp == 1)
		return (base);
	else if (exp <= 0)
		return (1);
	tmp = base;
	count = 1;
	while (count < exp)
	{
		base *= tmp;
		count++;
	}
	return (base);
}
