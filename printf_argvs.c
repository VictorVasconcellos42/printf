/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_argvs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:08:48 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/07/13 14:36:06 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_argvs(char c, va_list arguments)

{
	if (c == 'c')
		return (ft_putchar(va_arg(arguments, int)));
	if (c == 's')
		return (ft_putstr(va_arg(arguments, char *)));
	if (c == 'x')
		return (ft_puthexa_case(va_arg(arguments, unsigned int), c));
	if ((c == 'd') || (c == 'i'))
		return (ft_putnbr(va_arg(arguments, int)));
	if (c == 'X')
		return (ft_puthexa_case(va_arg(arguments, unsigned int), c));
	if (c == 'p')
		return (ft_puthexa_case(va_arg(arguments, unsigned long), c));
	if (c == 'u')
		return (ft_putunbr(va_arg(arguments, unsigned int)));
	if (c == '%')
		return (ft_putchar('%'));
}

