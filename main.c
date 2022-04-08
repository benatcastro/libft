/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:21:02 by becastro          #+#    #+#             */
/*   Updated: 2022/04/08 15:37:18 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

size_t	ft_count_substrs(char const *s, char c);


int	main(void)
{
	char	*str = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	char 	c = ' ';
	char	**splitted = ft_split(str, c);
	for (size_t i = 0; i < ft_count_substrs(str, c) + 1; i++)
	{
		printf("%s\n", splitted[i]);
	}
	
}
