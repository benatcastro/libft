/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becastro <becastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:07:56 by becastro          #+#    #+#             */
/*   Updated: 2022/04/04 15:54:47 by becastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	counter;

	counter = 0;
	while (s[counter])
	{
		if (s[counter] == c)
			return ((char *)&s[counter]);
		counter++;
	}
	if (s[counter] == c)
		return ((char *)&s[counter]);
	return (NULL);
}
