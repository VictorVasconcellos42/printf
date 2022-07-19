/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:31:38 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/07/19 09:48:52 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long num, char flag)

{
	static int	count;
	char		*base;
	char		*base2;

	base = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	count = 0;
	if (flag == 'X')
	{
		if (num >= 16)
			ft_puthexa(num / 16, flag);
		count += ft_putchar(base2[num % 16]);
	}
	else if ((flag == 'x') || (flag == 'p'))
	{
		if (num >= 16)
			ft_puthexa(num / 16, flag);
		count += ft_putchar(base[num % 16]);
	}
	return (count);
}

int	ft_puthexa_case(unsigned long num, char flag)

{
	int	count;

	count = 0;
	if (flag == 'X')
		count = ft_puthexa(num, flag);
	else if (flag == 'x' || flag == 'p')
		count = ft_puthexa(num, flag);
	return (count);
}
