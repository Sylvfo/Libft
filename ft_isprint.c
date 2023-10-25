/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:44:35 by sforster          #+#    #+#             */
/*   Updated: 2023/10/24 14:44:38 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/
#include ¨libft.h¨

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	d;
	d = 'w';
	int	e;
	e = '/';
	int	f;
	f = '0';
	int	g;
	g = 'T';
	int	h;
	h = 'z';

	printf("%i\n", ft_isprint(d));
	printf("%i\n", ft_isprint(e));
	printf("%i\n", ft_isprint(f));
	printf("%i\n", ft_isprint(g));
	printf("%i\n", ft_isprint(h));
}*/