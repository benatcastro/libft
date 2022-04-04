/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becastro <becastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:32:47 by becastro          #+#    #+#             */
/*   Updated: 2022/04/04 10:38:11 by becastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	counter;
	char			*string;

	string = str;
	counter = 0;
	while (counter < n)
	{
		string[counter] = c;
		counter++;
	}
	return (str);
}
