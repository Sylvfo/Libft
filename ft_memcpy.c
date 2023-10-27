/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:43:57 by sforster          #+#    #+#             */
/*   Updated: 2023/10/27 18:21:47 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int	i;

	i = 0;
	while(i < n && ((const char *)src)[i]!= '\0')
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	((char *)dst)[i] = '\0';
	i++;
	return (i);
}

int main(void)
{
	char	dest[25];
	char	sour[] = "soledad ";

	printf("%i\n%s\n", ft_memcpy(dest, sour, 13), dest);
	return (0);
}

/*

		if (src[i] == (const void *)'\0')
		est-ce qu il faut rajouter un i en plus?? */