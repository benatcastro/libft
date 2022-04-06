/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:57:55 by bena              #+#    #+#             */
/*   Updated: 2022/04/06 15:48:01 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	index;
	//printf("count:%ld\n", ft_countchars(s1, set));
	if(!(str = malloc(ft_strlen(s1) - ft_countchars(s1, set) + 1)))
		return (NULL);
	while (*s1)
	{
		index = 0;
		while (set[index])
		{
			if (*s1 == set[index])
			{
				printf("test\n");
			}
			index++;
		}
		printf("%c", *s1);
		*str = *s1;
		str++;
		s1++;
	}
	printf("str: %s", str);
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
				counter++;
			index2++;
		}
		index1++;
	}
return (counter);
}