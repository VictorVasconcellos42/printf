/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 08:34:43 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/07/13 09:31:18 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)

{
	ft_putchar('a');
	ft_putchar('\n');
	ft_putstr("Hello\n");
	ft_putnbr(42);
	ft_putchar('\n');

	int len = ft_printf("RAONI%s", "Victor");
	printf("%d", len);
	return 0;
}
