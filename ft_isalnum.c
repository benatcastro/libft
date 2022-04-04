/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becastro <becastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:05:33 by becastro          #+#    #+#             */
/*   Updated: 2022/03/28 16:14:49 by becastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns 1 if alphanumeric 0 if not
int	ft_isalnum(int argument)
{
	if ((argument >= 'a' && argument <= 'z')
		|| (argument >= 'A' && argument <= 'Z')
		|| (argument >= '0' && argument <= '9'))
		return (1);
	else
		return (0);
}
