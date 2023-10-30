/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:46:56 by marvin            #+#    #+#             */
/*   Updated: 2023/10/26 16:46:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libc.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (i < (int)n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
    const char *str1 = "Ours";
    const char *str2 = "Outa";

    printf("%d", ft_strncmp(str1, str2, 2));
    return (0);
}*/