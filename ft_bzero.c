/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becastro <becastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:55:27 by becastro          #+#    #+#             */
/*   Updated: 2022/04/14 17:00:17 by becastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	counter;
	char			*string;

	string = s;
	counter = 0;
	while (counter < n)
	{
		string[counter] = 0;
		counter++;
	}
}
