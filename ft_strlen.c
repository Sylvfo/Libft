/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:44:57 by sforster          #+#    #+#             */
/*   Updated: 2023/10/31 16:59:32 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*int	main(void)
{
    const char	  *d;
    d = "Hello";
	const char	  *e;
    e = "He";
	const char	  *f;
    f = "Hello comment tu vas?";
	const char	  *g;
    g = " ";
	const char	  *h;
    h = "Deja loin";

    printf("%i\n", ft_strlen(d));
    printf("%i\n", ft_strlen(e));
    printf("%i\n", ft_strlen(f));
    printf("%i\n", ft_strlen(g));
    printf("%i\n", ft_strlen(h));
}*/