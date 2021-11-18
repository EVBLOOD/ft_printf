/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:04:05 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/18 21:54:57 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		arg_list;
	int			i;
	int			count;
	char		rep;

	i = 0;
	count = 0;
	va_start(arg_list, format);
	while (format[i])
	{
		rep = ft_search(&format[i]);
		if (rep == ' ')
			count += ft_putchar(format[i]);
		else if (rep == 'c')
			count += ft_putchar(va_arg(arg_list, int));
		else if (rep == 's')
			count += ft_putstr(va_arg(arg_list, char *));
		else if (rep == 'p')
			ft_putptr(va_arg(arg_list, unsigned long), &count);
		else if (rep == 'd' || rep == 'i')
			ft_putnbr(va_arg(arg_list, int), &count);
		else if (rep == 'u')
			ft_putunbr(va_arg(arg_list, unsigned int), &count);
		else if (rep == 'x')
			ft_puthexl(va_arg(arg_list, unsigned long), &count);
		else if (rep == 'X')
			ft_puthexup(va_arg(arg_list, unsigned long), &count);
		else if (rep == '%')
			count += ft_putperc();
		if (rep != ' ')
			i++;	
		i++;
	}
	va_end(arg_list);
	return (count);
}