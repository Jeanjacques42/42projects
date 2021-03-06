/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseropia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 15:48:21 by gseropia          #+#    #+#             */
/*   Updated: 2016/01/13 10:54:00 by gseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_return_pos(char *buf, char c)
{
	int i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
