/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:32:00 by sforster          #+#    #+#             */
/*   Updated: 2023/11/03 10:36:59 by sforster         ###   ########.fr       */
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

char	*ft_strnstr(const char *hays, const char *needle, size_t l)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)hays);
	while (hays[i] && i < l)
	{
		while (hays[i + j] == needle[j] && hays[i + j] && i + j < l)
		{
			j++;
			if (needle[j] == 0)
				return ((char *)hays + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
