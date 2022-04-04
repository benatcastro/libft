/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:12:44 by bena              #+#    #+#             */
/*   Updated: 2022/04/04 22:51:19 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	counter;
	char	*sub;
	if (len == 0)
		return (NULL);
	counter = 0;
	while (s[counter])
	{
		if (s[counter] == (char)start)
		{
			sub = malloc(len * sizeof(char));
			ft_strlcpy(sub, &s[counter], len);
			return(sub);
		}
		counter++;
	}
	return (NULL);
	
}