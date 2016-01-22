/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseropia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/17 11:53:05 by gseropia          #+#    #+#             */
/*   Updated: 2016/01/22 17:17:11 by gseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	lastcheck(char *s, int nbr, t_sdp *stock)
{
	int ret;

	ret = 0;
	if (stock->precision)
		while (stock->prec_size-- > ft_strlen(s) && stock->prec_size > 0)
		{
			write(1, "0", 1);
			ret++;
			stock->size--;
		}
	ft_putstr(s);
	stock->size = stock->size - ft_strlen(s);
	if (stock->flagminus && stock->size > 0)
		while (stock->size-- > 0)
		{
			write(1, " ", 1);
			ret++;
		}
	return (ret + ft_strlen(s));
}

int	checkrelou(char *s, int nbr, t_sdp *stock)
{
	int ret;

	ret = 0;
	if (stock->flagplus && nbr >= 0)
	{
		write(1, "+", 1);
		ret++;
	}
	if (nbr < 0)
	{
		write(1, s++, 1);
		ret++;
		stock->size--;
		stock->prec_size--;
	}
	if (stock->flagzero && stock->size > 0 && !stock->flagminus)
	{
		while (!stock->precision && stock->size-- > ft_strlen(s))
		{
			write(1, "0", 1);
			ret++;
			stock->prec_size--;
		}
	}
	return (ret + lastcheck(s, nbr, stock));
}

int	easyflags(char *s, int nbr, t_sdp *stock)
{
	int ret;

	ret = 0;
	if (stock->flagspace && !stock->flagplus && nbr > 0)
	{
		write(1, " ", 1);
		ret++;
		stock->size--;
	}
	if (stock->flagplus && nbr >= 0)
		stock->size--;
	if (stock->size > 0 && !stock->flagminus && stock->precision)
		while (stock->size > ft_strlen(s) && stock->size-- > (stock->prec_size))
		{
			ret++;
			write(1, " ", 1);
		}
	if (stock->size > 0 && !stock->flagminus && !stock->precision)
		while (!stock->flagzero && stock->size > (ft_strlen(s)))
		{
			stock->size--;
			ret++;
			write(1, " ", 1);
		}
	return (ret + checkrelou(s, nbr, stock));
}

int	return_i(va_list ap, t_sdp *stock)
{
	char	*s;
	int		test;
	int		ret;

	if (stock->flagmax == 1)
		return (return_maxi(ap, stock));
	if (stock->flaglonglong == 1)
		return (return_longlongi(ap, stock));
	if (stock->flaglong == 1)
		return (return_longi(ap, stock));
	ret = 0;
	test = va_arg(ap, int);
	if (stock->flagshort && test > 32767)
		test = test - 32768 - 32768;
	if (stock->flagchar)
	{
		if (test < -128)
			test = test + 256;
		else if (test > 127)
			test = test - 256;
	}
	if (test < 0)
		stock->prec_size++;
	s = ft_itoa(test);
	ret = 0;
	ret = easyflags(s, test, stock);
	return (ret);
}
