/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseropia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 17:22:38 by gseropia          #+#    #+#             */
/*   Updated: 2016/01/19 21:30:52 by gseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	char	*remplimoitoucalonglong(char *s1, unsigned long long n, unsigned int size, unsigned int base)
{
	unsigned int	index;
	unsigned long long	lol;

	index = 0;
	lol = n;
	while (size > index && size)
	{
		if ((s1[size - 1] = lol % base + '0') > 57)
			s1[size - 1] = lol % base + '0' + 39;
		lol = lol / base;
		size--;
	}
	return (s1);
}

char			*ft_longlongbase(unsigned long long n, unsigned int base)
{
	unsigned long	long	test;
	unsigned int	taille;
	char	*ret;
	ret = NULL;
	taille = 1;
	test = n;

	while (test / base != 0)
	{
		taille++;
		test = test / base;
	}
	ret = ft_strnew(taille);
	if (ret)
		ret = remplimoitoucalonglong(ret, n, taille, base);
	else
		return (NULL);
	return (ret);
}
