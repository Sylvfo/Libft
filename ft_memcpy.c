/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:43:57 by sforster          #+#    #+#             */
/*   Updated: 2023/10/31 16:59:27 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dest[25] = "Bonjour";
	char	sour[] = "sole";

	printf("%s\n%s\n", ft_memcpy(dest, sour, 4), dest);
	return (0);
}
*/
/*

		if (src[i] == (const void *)'\0')
		est-ce qu il faut rajouter un i en plus?? */