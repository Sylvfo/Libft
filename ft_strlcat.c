/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:25:49 by sforster          #+#    #+#             */
/*   Updated: 2023/10/31 16:59:30 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

unsigned int	ft_lenstr(const char *str)
{
	unsigned int	co;

	co = 0;
	while (str[co])
	{
		co++;
	}
	return (co);
}

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

unsigned int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sd;
	size_t	ss;

	sd = ft_lenstr(dst);
	ss = ft_lenstr(src);
	if (sd >= dstsize)
		sd = dstsize;
	if (sd == dstsize)
		return (sd + ss);
	if (sd + ss < dstsize)
		ft_memcpy(dst + sd, src, ss + 1);
	else
		ft_memcpy(dst + sd, src, dstsize - sd - 1);
	dst[dstsize - 1] = '\0';
	return (sd + ss);
}

/*
int	main(void)

	char	dest[] = "Salut ";
	char	src[] = "Je crois que je suis parti la bas";
	printf("premiere %u %s\n", ft_strlcat(dest, src, 100), dest);
	
	char	dd[] = "Hello ";
	char	hu[] = "Tu es parti en amerique";
	printf("deuxieme %u %s\n", ft_strlcat(dd, hu, 50), dd);
	return (0);
}*/