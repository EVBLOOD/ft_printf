/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:14:02 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/19 03:15:09 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthexul(unsigned long nbr, int *counter)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr < 16)
	{
		write(1, &hex[nbr], 1);
		*counter += 1;
	}
	else
	{
		ft_puthexul(nbr / 16, counter);
		ft_puthexul(nbr % 16, counter);
	}
}

void	ft_putptr(unsigned long nbr, int *counter)
{
	write(1, "0x", 2);
	*counter += 2;
	ft_puthexul(nbr, counter);
}
