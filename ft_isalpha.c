/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:36:27 by sforster          #+#    #+#             */
/*   Updated: 2023/11/06 17:18:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*int main(void)
{
    int    d;
    d = '4';
    int    e;
    e = 'Z';
    int    f;
    f = 'K';
    int    g;
    g = '$';
    int    h;
    h = 'z';

    printf("%i\n", ft_isalpha(d));
    printf("%i\n", ft_isalpha(e));
    printf("%i\n", ft_isalpha(f));
    printf("%i\n", ft_isalpha(g));
    printf("%i\n", ft_isalpha(h));
}*/