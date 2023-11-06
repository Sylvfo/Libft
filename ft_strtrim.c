/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:04:32 by sforster          #+#    #+#             */
/*   Updated: 2023/11/06 17:18:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = ft_strlen(s1);
	res = 0;
	if (s1 != 0 && set != 0)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		res = (char *)malloc((j - i + 1) * sizeof(char));
		if (!res)
			return (NULL);
		ft_strlcpy(res, &s1[i], (j - i + 1));
	}
	return (res);
}
/*
int	main(void)
{
	char const	sl[] = "etteejejeclotecptetteeet";
	char const	st[] = "et";

	printf("%s\n", ft_strtrim(sl, st));
	return (0);
}
*/