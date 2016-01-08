/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseropia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 12:20:32 by gseropia          #+#    #+#             */
/*   Updated: 2016/01/08 16:57:51 by gseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void check_my_format(const char* format, va_list ap)
{
	void *s;
	char* liste;
	liste = "sSpdDioOuUxXcC";

	format++;
	if(*format == 's')
	{
		s = va_arg(ap, char*);
		ft_putstr(s);
	}
}
int ft_printf(const char *format, ...)
{
	va_list ap;
	void *s;

	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			check_my_format(format++,ap);
			format++;
		}
		else
			write(1, format++, 1);
	}
	va_end(ap);
	return (0);
}
