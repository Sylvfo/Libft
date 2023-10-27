/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:25:49 by sforster          #+#    #+#             */
/*   Updated: 2023/10/27 11:28:25 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

unsigned int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	u;

	i = ft_lenstr(dst);
	u = 0;
	while (u < ft_lenstr(src) && i < (dstsize - 1))
	{
		dst[i] = src[u];
		i++;
		u++;
	}
	dst[i] = '\0';
	return (i + 1);
}

int	main(void)
{
	char	dest[] = "Salut ";
	char	src[] = "Je crois que je suis parti la bas";
	printf("premiere %u %s\n", ft_strlcat(dest, src, 100), dest);
	
	char	dd[] = "Hello ";
	char	hu[] = "Tu es parti en amerique";
	printf("deuxieme %u\n", ft_strlcat(dd, hu, 20));
	return (0);
}