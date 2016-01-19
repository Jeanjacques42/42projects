/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseropia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/17 14:25:08 by gseropia          #+#    #+#             */
/*   Updated: 2016/01/19 21:53:30 by gseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int return_c(va_list ap , sdp_list *stock)
{
	char c;
	int i;
	char print;
	int ret;

	ret = 0;
	print = ' ';
	if (stock->flaglong == 1)
		return (return_C(ap, stock));
	if (stock->fonction == '%')
		c = '%';
	else
	{
		i = va_arg(ap, int);
		c = i;
	}
	if (stock->flagzero && !stock->flagminus)
		print = '0';
	while (stock->size > 1 && !stock->flagminus)
	{
		stock->size--;
		ft_putchar(print);
		ret++;
	}
	ft_putchar(c);
	stock->size--;
	if (stock->flagminus)
		while (stock->size-- > 0)
		{
			ft_putchar(' ');
			ret++;
		}
	return (ret + 1);
}
