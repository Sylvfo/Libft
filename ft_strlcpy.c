/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:08:21 by sforster          #+#    #+#             */
/*   Updated: 2023/10/30 16:18:35 by sforster         ###   ########.fr       */
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

int	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;
	int sizesrc;

	sizesrc = ft_strlen(src);
	i = 0;
	while (i < sizesrc - 1 && i < (int)dstsize)
	{
			dst[i] = src[i];
			i++;
	}
	dst[i] = '\0';
	return (i);
}

int	main(void)
{
	char	dest[] = "Salut  toi";
	char	src[] = "Je crois que je suis parti la bas";
	printf("premiere %u %s\n", ft_strlcpy(dest, src, 5), dest);
	
	char	dd[] = "Hello bonjour";
	char	hu[] = "Tu e";
	printf("deuxieme %u %s\n", ft_strlcpy(dd, hu, 8), dd);
	return (0);	
}

/*int	ft_strlen(int *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int	i;

	i = 0;
	if (ft_strlen((int*)dstsize) == 0)
		return ('NULL');
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (i);
}

int	main(void)
{
	char	dest[] = "Salut  toi";
	char	src[] = "Je crois que je suis parti la bas";
	printf("premiere %u %s\n", ft_strlcpy(dest, src, 5), dest);
	
	char	dd[] = "Hello bonjour";
	char	hu[] = "Tu es parti en amerique";
	printf("deuxieme %u\n", ft_strlcpy(dd, hu, 10));
	return (0);	
}*/