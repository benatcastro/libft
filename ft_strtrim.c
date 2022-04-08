/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:57:55 by bena              #+#    #+#             */
/*   Updated: 2022/04/08 12:18:30 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int ft_check_in_set (char c, const char *set);

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	
	if (!(str = malloc(ft_strlen(s1 + 1))))
		return (NULL);
	while (*s1)
	{
		if (ft_check_in_set(*s1, set) == 0)
		{
			str[i] = *s1;
			i++;
		}
		s1++;
	}
	return (str);
}

size_t	ft_countchars(const char *s1, const char *set)
{
	size_t	counter;
	size_t	index1;
	size_t	index2;

	counter = 0;
	index1 = 0;
	while (s1[index1])
	{
		index2 = 0;
		while (set[index2])
		{
			if(s1[index1] == set[index2])
			{
				counter++;
				break;
			}
			index2++;
		}
		index1++;
	}
return (counter);
}

unsigned int ft_check_in_set (char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}