/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:51:51 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/18 21:57:04 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	ft_putunbr(unsigned int nbr, int *counter)
{
	char	c;
	
	if (nbr <= 9)
	{
		c = '0' + nbr;
		write (1, &c, 1);
		*counter += 1;
	}
	else
	{
		ft_putunbr(nbr / 10, counter);
		ft_putunbr(nbr % 10, counter);
	}
}