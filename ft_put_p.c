/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:08:57 by mel-hime          #+#    #+#             */
/*   Updated: 2024/01/14 13:07:12 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_nbrs(unsigned long str)
{
	int	count;

	count = 0;
	if (str == 0)
		return (1);
	while (str)
	{
		str = str / 16; 
		count++;
	}
	return (count);
}

int	ft_put_p(unsigned long long nb)
{
	int		cnt;
	char	*base;

	cnt = count_nbrs(nb);
	base = "0123456789abcdef";
	if (nb < 16)
		ft_put_c(base[nb]);
	if (nb >= 16)
	{
		ft_put_p(nb / 16);
		ft_put_p(nb % 16);
	}
	return (cnt);
}
