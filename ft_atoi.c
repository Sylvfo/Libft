/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:03:17 by sforster          #+#    #+#             */
/*   Updated: 2023/10/30 14:49:59 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	minus = 1;
	result = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	result = result * minus;
	return (result);
}
/*
int	main(void)
{
	const char	*src = "   +-++-----1844523d";

	printf("%d\n", ft_atoi(src));
	return (0);
}*/