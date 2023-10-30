/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:53:18 by sforster          #+#    #+#             */
/*   Updated: 2023/10/30 16:13:39 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	while (len--)
	{
		((char *)dst)[len] = ((const char *)src)[len];
	}
	return (dst);
}

/*
int	main(void)
{
void	*tal = "holala";
void	*al = "salut";

printf("%s\n", ft_memmove(tal, al, 4));
return (0);
}
*/