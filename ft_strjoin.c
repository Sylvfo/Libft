/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:49:16 by sforster          #+#    #+#             */
/*   Updated: 2023/11/03 10:56:45 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	dst = (char *)malloc((j + ft_strlen(s2) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = (char)s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		dst[j] = (char)s2[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst);
}

/*
int	main(void)
{
	char const	a1[] = "Bien";
	char const	a2[] = " joue! :)";

	printf("%s\n", ft_strjoin(a1, a2));
	return (0);
}*/