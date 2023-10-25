/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:49:43 by sforster          #+#    #+#             */
/*   Updated: 2023/10/25 13:51:56 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*int	main(void)
{
	int	a = '2';
	int b = 'a';
	int c = 'T';
	int d = ')';

	printf("%c\n", ft_toupper(a));
	printf("%c\n", ft_toupper(b));
	printf("%c\n", ft_toupper(c));
	printf("%c\n", ft_toupper(d));
	return (0);
}*/