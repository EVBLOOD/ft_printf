/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:04:05 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/19 04:50:38 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_test(char rep, int *count, void *args)
{
	if (rep == 'p')
		ft_putptr((unsigned long) args, count);
	else if (rep == 'd' || rep == 'i')
		ft_putnbr((int) args, count);
	else if (rep == 'u')
		ft_putunbr((unsigned int) args, count);
	else if (rep == 'x')
		ft_puthexl((unsigned long) args, count);
	else if (rep == 'X')
		ft_puthexup((unsigned long) args, count);
	else
		return ;
}

int	ft_printf(const char *format, ...)
{
	va_list		arg_list;
	int			i;
	int			count;

	i = 0;
	count = 0;
	va_start(arg_list, format);
	while (format[i])
	{
		if (ft_search(&format[i]) == ' ')
			count += ft_putchar(format[i]);
		else if (ft_search(&format[i]) == 'c')
			count += ft_putchar(va_arg(arg_list, int));
		else if (ft_search(&format[i]) == 's')
			count += ft_putstr(va_arg(arg_list, char *));
		else if (ft_search(&format[i]) == '%')
			count += ft_putperc();
		else
			ft_test(ft_search(&format[i]), &count, va_arg(arg_list, void *));
		if (ft_search(&format[i]) != ' ')
			i++;
		i++;
	}
	va_end(arg_list);
	return (count);
}
