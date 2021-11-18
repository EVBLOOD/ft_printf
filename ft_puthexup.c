/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:31:08 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/18 22:51:10 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexup(unsigned int nbr, int *counter)
{
	char		*hex;

	hex = "0123456789ABCDEF";
	if (nbr < 16)
	{
		write(1, &hex[nbr], 1);
		*counter += 1;
	}
	else
	{
		ft_puthexup(nbr / 16, counter);
		ft_puthexup(nbr % 16, counter);
	}
}