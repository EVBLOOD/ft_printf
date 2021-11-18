/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:33:54 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/18 22:51:04 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexl(unsigned int nbr, int *counter)
{
	char		*hex;

	hex = "0123456789abcdef";
	if (nbr < 16)
	{
		write(1, &hex[nbr], 1);
		*counter += 1;
	}
	else
	{
		ft_puthexl(nbr / 16, counter);
		ft_puthexl(nbr % 16, counter);
	}
}
