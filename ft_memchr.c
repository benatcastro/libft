/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becastro <becastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:42:22 by becastro          #+#    #+#             */
/*   Updated: 2022/03/30 12:51:56 by becastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		counter;
	const char	*str;

	str = s;
	counter = 0;
	while (str[counter] && counter < n)
	{
		if (str[counter] == c)
			return ((void *)&s[counter]);
		counter++;
	}
	return (NULL);
}
