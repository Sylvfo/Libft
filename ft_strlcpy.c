/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:08:21 by sforster          #+#    #+#             */
/*   Updated: 2023/11/01 16:08:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

int	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	sizesrc;

	sizesrc = ft_strlen(src);
	if (sizesrc + 1 < dstsize)
	{
		ft_memmove(dst, src, sizesrc + 1);
	}
	else if (dstsize != 0)
	{
		ft_memmove(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (sizesrc);
}

/*
int	main(void)
{
	char	dest[] = "Salut  toi";
	char	src[] = "Je crois que je suis parti la bas";
	printf("premiere %u %s\n", ft_strlcpy(dest, src, 8), dest);
	
	char	dd[] = "Hello bonjour";
	char	hu[] = "Tu e";
	printf("deuxieme %u %s\n", ft_strlcpy(dd, hu, 12), dd);
	return (0);	
}


int	ft_strlen(int *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

}*/