/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:30:59 by bena              #+#    #+#             */
/*   Updated: 2022/04/21 06:27:01 by bena             ###   ########.fr       */
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
	size_t	subs;

	subs = ft_count_substrs(s, c);
	str = malloc(ft_count_substrs(s, c) * sizeof(char *));
	if (!(str))
		return (NULL);
	count = 0;
	while (*s && (count - 1) < subs)
	{
		while (*s == c)
			s++;
		printf("tab[0] mem: %lu\n", ft_sub_size(s,c));
		(str[count] = malloc(ft_sub_size(s, c) + 1));
		if (!(str))
			return (NULL);
		ft_strlcpy(str[count], s, ft_sub_size(s, c) + 1);
		//printf("pre str: %s\n", str[count]);
		count++;
		s += ft_sub_size(s, c);
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
			break ;
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
		if ((s[1] == c || s[1] == '\0') && *s != c)
			count++;
		s++;
	}
	printf("sub count: %ld\n", count);
	if (count > 0)
		return (count + 1);
	return (count);
}
