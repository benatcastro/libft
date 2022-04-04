/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becastro <becastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:21:02 by becastro          #+#    #+#             */
/*   Updated: 2022/04/04 15:08:22 by becastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
	char	dst[20] = "hola";
	char	*src;
	size_t	size;

	size = 13;
	src = "buenas";
	printf("%zu\n%s", ft_strlcat(dst, src, size), dst);
}
