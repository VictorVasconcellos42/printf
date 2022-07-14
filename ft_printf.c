/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 04:07:13 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/07/14 13:26:21 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *text, ...)

{

	va_list	arguments;
	int		symbol;
	int		result;
	int		count;

	count = 0;
	symbol = 0;
	result = 0;
	va_start(arguments, text);
	while (text[symbol])
	{
		if (text[symbol] == '%' && ft_strchr("cspdiuxX%", text[symbol + 1]))
		{
			result +=  argument_case(text[symbol + 1], arguments);
			symbol++;
		}
		else 
		{
			ft_putchar(text[symbol]);
			count++;
		}
		symbol++;
	}
	va_end(arguments);
	return (count + result);
}
