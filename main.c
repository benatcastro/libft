/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:21:02 by becastro          #+#    #+#             */
/*   Updated: 2022/04/05 01:11:40 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("User atoi: %d\n", ft_atoi(argv[1]));
	printf("Sis atoi: %d\n", atoi(argv[1]));;
}
