/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseropia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:37:39 by gseropia          #+#    #+#             */
/*   Updated: 2016/03/03 10:46:22 by gseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	char	*remplimoitouca(char *s1, long n, size_t size)
{
	size_t			index;
	unsigned long	lol;

	index = 0;
	lol = 0;
	if (n < 0)
	{
		s1[0] = '-';
		index++;
		n = -n;
	}
	lol = n;
	while (size > index && size)
	{
		s1[size - 1] = lol % 10 + '0';
		lol = lol / 10;
		size--;
	}
	return (s1);
}

char			*ft_longitoa(long n)
{
	long	test;
	size_t	taille;
	char	*ret;

	ret = NULL;
	taille = 1;
	test = n;
	if (n < 0)
		taille++;
	while (test / 10 != 0)
	{
		taille++;
		test = test / 10;
	}
	ret = ft_strnew(taille);
	if (ret)
		ret = remplimoitouca(ret, n, taille);
	else
		return (NULL);
	return (ret);
}
