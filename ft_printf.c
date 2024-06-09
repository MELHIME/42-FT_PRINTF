/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:29:10 by mel-hime          #+#    #+#             */
/*   Updated: 2024/06/09 10:46:08 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				break ;
			cnt += ft_conv(args, format[i + 1]);
			i++;
			//printf("/n%d/n", args->gp_offset);
		}
		else
			cnt += ft_put_c(format[i]);
		i++;
	}
	va_end(args);
	return (cnt);
}

// int main ()
// {
    //int i = -313100100;
	// unsigned int a = -200;
	//  char c = 'z';
	// char str[] = "THE JOKER";
    // ft_printf("%d\n", ft_printf("my printf :the number is %i  %%  %x %X %u %c %s %p %c \n", i, a, a, a, c, str, &a));
    // printf("%d\n", printf("od printf :the number is %i  %%  %x
	//   %X %u %c %s %p %c \n", i, a, a, a, c, str, &a));
 	// ft_printf("my printf :the number is %i  %%  %x
	//   %X %u %c  %s %p  \n", i, a, a, a, c, str, &a);
    //  printf("od printf :the number is %i  %%  %x
	//    %X %u %c  %s %p  \n", i, a, a, a, c, str, &a);
// 	printf ("%lu", &c);
//  }

// int	somme(int nb, ...)
// {
// 	int 	total;
// 	va_list	p;

// 	total = 0;
// 	va_start(p, nb);
// 	for(int i = 0; i < nb; i++)
// 		total += (va_arg(p, int) - 48);
// 	return (total);
// }
// int main ()
// {
// 	printf ("\n%d", ft_printf("%s", NULL));
// 	//  int a, b;
// 	// printf("entrer a :\n");
// 	// scanf("%d", &a);
// 	// printf("entrer b :\n");
// 	// scanf("%i", &b);
// 	// printf("a = %d et b = %i", a, b);
// 	// printf("%% %k");
// 	printf("la somme et %d", somme(3, '3', '2', '6'));
	
// }