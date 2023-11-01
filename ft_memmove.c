/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:53:18 by sforster          #+#    #+#             */
/*   Updated: 2023/11/01 16:07:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	char		*sour;

	if (!dst || !src)
		return (NULL);
	dest = (char *)dst;
	sour = (char *)src;
	i = 0;
	if (dest > sour)
	{
		while (len-- > 0)
			dest[len] = sour[len];
	}
	else
	{
		while (i < len)
		{
			dest[i] = sour[i];
			i++;
		}
	}
	return (dst);
}

/*
int	main(void)
{
	char	tal[] = "holala";
	char	al[] = "salut";

printf("%s\n", ft_memmove(tal, al, 2));
return (0);
}*/