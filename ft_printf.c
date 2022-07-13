/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 04:07:13 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/07/13 14:32:49 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *text, ...)

{

	va_list	arguments;
	int		symbol;
	int		result;

	symbol = 0;
	result = 0;
	va_start(arguments, text);
	while (text[symbol])
	{
		if (text[symbol] == '%' && ft_strchr("cspdiuxX%", text[symbol + 1]))
			result +=  print_argvs(text[symbol + 1], arguments);
		else
			ft_putchar(text[symbol]);
		symbol++;
	}
	va_end(arguments);
	return (symbol + result);
}
