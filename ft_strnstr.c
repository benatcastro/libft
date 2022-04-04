/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:52:16 by bena              #+#    #+#             */
/*   Updated: 2022/04/05 00:34:51 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	size_t	find_len;

	if (!*s2)
		return(char *)(s1);
	find_len = ft_strlen(s2);
	index = 0;
	while (s1[index] && index < n)
	{
		if (s1[index] == s2[0] && ft_strncmp(&s1[index], s2, find_len) == 0)
			return((char *)&s1[index]);
		index++;
	}
	return (NULL);	
}

// int	main(void)
// {
// 	char test[0];
// 	(void)test;
// 	printf("User: %s\n", ft_strnstr("hola buenashola", "test", 125));
// 	//printf("User: %s", strnstr("hola buenas", "buenas", 2));
// }