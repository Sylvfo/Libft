/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:32:00 by sforster          #+#    #+#             */
/*   Updated: 2023/11/06 17:18:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
