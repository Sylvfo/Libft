/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:32:40 by marvin            #+#    #+#             */
/*   Updated: 2023/10/26 15:32:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;
	char	cc;

	cc = (char)c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = ((char *)s + i);
		i++;
	}
	if (s[i] == cc)
		res = ((char *)s + i);
	return (res);
}

/*
int main(void)
{
    const char *str = "Chaussette";

    printf("%s\n", ft_strrchr(str, '\0'));
    return (0);
}


char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*res;
	char	cc;

	a = ft_strlen(s) + 1;
	if (c == '\0')
		return ((char *)s + a);
	while (a >= 0)
	{
		if (s[a] == c)
			return ((char *)s + a);
		a--;
	}
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = ft_strlen(s);
	while (a >= 0)
	{
		if (s[a] == c)
			return ((char *) s + a);
		a--;
	}
	return (NULL);
}

*/