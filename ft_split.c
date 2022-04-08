/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:30:59 by bena              #+#    #+#             */
/*   Updated: 2022/04/08 14:11:17 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_sub_size(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	count;
	str = malloc(10);
	count = 0;
	while (*s)
	{
		if (*s == c && s[1] != c && count < ft_countchars(s, (char *)c))
		{
			if (!(str[count] = malloc(ft_strlen(s))))
				return (NULL);
			str[count] = ft_substr(s + 1, 0, ft_sub_size(s + 1, c));
			count ++;
		}
		s++;
	}
	return (str);
}

size_t	ft_sub_size(char const *s, char c)
{
	size_t	counter;

	counter = 0;
	while (s[counter])
	{
		if (s[counter] == c)
			return (counter);
		counter++;
	}
	return (counter);
}