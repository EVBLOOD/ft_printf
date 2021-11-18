/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:08:26 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/18 19:40:04 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr(long long nbr, int *counter)
{
	char	c;

	if (nbr < 0)
	{
		nbr = nbr * -1;
		write(1, "-", 1);
		*counter += 1;
	}
	if (nbr <= 9)
	{
		c = '0' + nbr;
		write (1, &c, 1);
		*counter += 1;
	}
	else
	{
		ft_putnbr(nbr / 10, counter);
		ft_putnbr(nbr % 10, counter);
	}
}