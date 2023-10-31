/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:37:30 by marvin            #+#    #+#             */
/*   Updated: 2023/10/26 15:37:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

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

/*int main(void)
{
    const char *str = "Salut toi!";

    printf("%s", ft_strchr(str, 'z'));
    return (0);
}*/