/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctostr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becastro <becastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 06:39:34 by becastro          #+#    #+#             */
/*   Updated: 2022/04/22 06:47:12 by becastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_ctostr(unsigned char c)
{
	char	*str;

	str = malloc(1);
	str[0] = c;
	printf("C: %s", str);
	return (str);
}
