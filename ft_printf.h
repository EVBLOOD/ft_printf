/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:02:48 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/18 22:51:48 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
void 	ft_putptr(unsigned long nbr, int *counter);
void 	ft_putnbr(long long nbr, int *counter);
int 	ft_putchar(char x);
int		ft_putstr(char *str);
int		ft_strlen(char *str);
int 	ft_printf(const char *, ...);
void	ft_puthexl(unsigned int nbr, int *counter);
void	ft_puthexup(unsigned int nbr, int *counter);
int		ft_putperc(void);
char	ft_search(const char *c);
void	ft_putunbr(unsigned int nbr, int *counter);
#endif
