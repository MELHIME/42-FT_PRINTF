/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:50:32 by mel-hime          #+#    #+#             */
/*   Updated: 2024/01/17 15:48:57 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv(va_list args, char c)
{
	int	cnt;

	cnt = 0;
	if (c == 'c')
		cnt = ft_put_c(va_arg(args, int));
	else if (c == 's')
		cnt = ft_put_s(va_arg(args, char *));
	else if (c == 'p')
	{
		cnt = ft_put_s("0x");
		cnt += ft_put_p(va_arg(args, unsigned long long));
	}
	else if (c == 'd' || c == 'i')
		cnt = ft_put_d(va_arg(args, int));
	else if (c == 'X')
		cnt = ft_put_x(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == 'x')
		cnt = ft_put_x(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'u')
		cnt = ft_put_x(va_arg(args, unsigned int), "0123456789");
	else
		cnt = ft_put_c(c);
	return (cnt);
}
