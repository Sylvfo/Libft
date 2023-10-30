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

#include "libft.h"
/*#include <stdio.h>*/

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int a;

	a = ft_strlen(s);
	while (a >= 0)
	{
		if (s[a] == c)
			return ((char*) s + a);
		a--;
	}
	return (NULL);
}

/*int main(void)
{
    const char *str = "Chaussette";

    printf("%s\n", ft_strrchr(str, 'C'));
    return (0);
}*/