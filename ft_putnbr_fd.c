/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:19:47 by sforster          #+#    #+#             */
/*   Updated: 2023/11/03 16:31:46 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;
	char			*num;
	unsigned int	i;

	i = 0;
	if (n < 0)
		write (fd, "-", 1);
	un = n;
	while (un != 0)
	{
		num[i -1] = (un % 10) + '0';
		un = un / 10;
		i--;
	}
	i = 0;
	while (num[i])
	{
		write (fd, num[i], 1);
		i++;
	}
}