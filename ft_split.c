/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:30:59 by bena              #+#    #+#             */
/*   Updated: 2022/04/08 15:35:11 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_sub_size(char const *s, char c);
size_t	ft_count_substrs(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	count;
	if (!(str = malloc(ft_count_substrs(s, c) * sizeof(char *))))
		return (NULL);
	str[0] = malloc(ft_sub_size(s + 1, c));
	ft_strlcpy(str[0], s, ft_sub_size(s, c) + 1);
	count = 1;
	while (*s)
	{
		if (*s == c && s[1] != c)
		{
			if (!(str[count] = malloc(ft_sub_size(s + 1, c))))
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
			break;
		counter++;
	}
	//printf("Sub size: %ld\n", counter);
	return (counter);
}

size_t	ft_count_substrs(char const *s, char c)
{
	size_t count;

	count = 0;
	while (*s)
	{
		if (*s == c && (s[1] != c && s[1] != '\0'))
			count++;
		s++;
	}
	//printf("sub count: %ld\n", count);
	return (count);	
}