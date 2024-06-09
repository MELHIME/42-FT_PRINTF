/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:22:35 by mel-hime          #+#    #+#             */
/*   Updated: 2024/01/17 16:18:06 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	count_nbrs(unsigned int str, char *base)
{
	int	len;
	int	lenbase;

	len = 0;
	lenbase = ft_strlen(base);
	if (str == 0)
		return (1);
	while (str)
	{
		len++;
		str = str / lenbase;
	}
	return (len);
}

int	ft_put_x(unsigned int nbr, char *base)
{
	int		len;
	int		cnt;
	long	nb;

	cnt = count_nbrs(nbr, base);
	nb = nbr;
	len = ft_strlen(base);
	if (nb < 0)
	{
		ft_put_c('-');
		nb = -nb;
	}
	if (nb < len)
	{
		ft_put_c(base[nb]);
	}
	if (nb >= len)
	{
		ft_put_x(nb / len, base);
		ft_put_x(nb % len, base);
	}
	return (cnt);
}
