/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseropia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 14:26:03 by gseropia          #+#    #+#             */
/*   Updated: 2016/01/10 16:53:45 by gseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
#include "../gnl/libft/libft.h"

int		ft_printf(const char *format, ...);
int		return_base(va_list ap, int base, int check);
int		check_diese(const char *format, va_list ap);
int		check_my_format(const char* format, va_list ap);
const char*	move_to_next_ap(const char *format);
typedef	struct g_list
{
	void *content_0;
	void *content_3;
}			f_list;
#endif
