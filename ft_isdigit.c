/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:40:57 by sforster          #+#    #+#             */
/*   Updated: 2023/10/24 14:40:59 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
/*
int main(void)
{
    char    d;
    d = '4';
    char    e;
    e = '+';
    char    f;
    f = ' ';
    char    g;
    g = '$';
    char    h;
    h = 'z';

    printf("%i\n", ft_isdigit(d));
    printf("%i\n", ft_isdigit(e));
    printf("%i\n", ft_isdigit(f));
    printf("%i\n", ft_isdigit(g));
    printf("%i\n", ft_isdigit(h));
}*/
