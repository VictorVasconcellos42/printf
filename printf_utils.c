/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 08:23:29 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/07/13 14:36:33 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)

{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)

{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	ft_putnbr(int num)

{
	static int	count;
	int			sign;

	sign = 0;
	count = 0;
	if (num < 0)
	{
		sign = ft_putchar('-');
		num *= -1;	
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	count += ft_putchar((num % 10) + 48);
	return (count + sign);
}

int	ft_putunbr(unsigned int number)

{
	static int	count;

	count = 0;
	if (number >= 10)
		ft_putunbr(number / 10);
	count += ft_putchar((number % 10) + 48);
	return (count);
}
