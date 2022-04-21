/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:30:59 by bena              #+#    #+#             */
/*   Updated: 2022/04/21 07:31:00 by bena             ###   ########.fr       */
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
	size_t	i;

	i = 0;
	str = malloc(ft_count_substrs(s, c) * sizeof(char *));
	if (!(str))
		return (NULL);
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			//printf("to print %s\n", s);
			str[count] = ft_strldup(s, ft_sub_size(s, c));
			count++;
			s += ft_sub_size(s,c);
			printf("TEST:%s\n", s);
		}
		i++;
		s++;
	}
	return (str);
}

size_t	ft_sub_size(char const *s, char c)
{
	size_t i;

	i = 0;
	while (*s && s[1] != c)
	{
		i++;
		s++;
	}

	return (i + 1);
}

size_t	ft_count_substrs(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if ((s[1] == c || s[1] == '\0') && *s != c)
			count++;
		s++;
	}
	//printf("sub count: %ld\n", count);
	if (count > 0)
		return (count + 1);
	return (count);
}
