/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:21:02 by becastro          #+#    #+#             */
/*   Updated: 2022/04/08 14:03:45 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
	char	*str = "     lorem ipsum dolor sit amet";
	char 	c = ' ';
	char	**splitted = ft_split(str, c);
	for (size_t i = 0; i < ft_countchars(str, " "); i++)
	{
		printf("%s\n", splitted[i]);
	}
	
}
