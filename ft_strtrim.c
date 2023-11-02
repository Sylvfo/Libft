/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:04:32 by sforster          #+#    #+#             */
/*   Updated: 2023/11/02 17:16:48 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			return ((char *) s + i);
		i++;
	}
	if (s[i] == (unsigned char) c)
		return ((char *) s + i);
	return (NULL);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int j;
	char	*res;

	while(s1[i] && ft_strnstr(set, s1[i]))
		i++;
	return (i);
}

int main(void)
{
	char const	sl[] = "jejeclocpt";
	char const	st[] = "e";
	printf("%s\n", ft_strtrim(sl, st));
	return (0);
}