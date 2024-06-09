/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:06:27 by mel-hime          #+#    #+#             */
/*   Updated: 2024/01/17 15:52:52 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_put_p(unsigned long long nb);
int		ft_conv(va_list args, char c);
int		ft_put_c(char c);
int		ft_put_d(int n);
int		ft_put_s(char *s);
int		ft_put_x(unsigned int nbr, char *base);

#endif
