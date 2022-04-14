/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becastro <becastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:42:22 by becastro          #+#    #+#             */
/*   Updated: 2022/04/14 16:46:57 by becastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		counter;
	char		*str;

	str = (char *)s;
	counter = 0;
	while (counter < n)
	{
		if (str[counter] == c)
			return (&str[counter]);
		counter++;
	}

	return (NULL);
}

	// int main(void)
	// {
	// 	printf("%s", ft_memchr("hola victor zayas puto amo te la mamo", 'p', 20));
	// }
