/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:04:12 by sforster          #+#    #+#             */
/*   Updated: 2023/11/03 15:34:26 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int wordcount(char const *s, char c)
{
	int	co;
	int	i;

	co = 0;
	i = 0;
	while (s[i])
	{
		if ((char)s[i] == c)
			co++;
		i++;
	}
	return (co);
}

char	*mot(const char str, char c, int ind)
{
	int	i;
	char	*mot;

	mot = 0;
	i = 0;
	while (str[ind + i] != c && str[ind + i] != '\0')
		i++;
	mot = (char *)malloc(i * sizeof(char));
	if (!mot)
		return (NULL);
	ft_strlcpy(mot, &str[ind], i);
	return (mot);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		t;
	char	**tab;

	i = 0;
	t = wordcount(s, c);
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			tab[t][j] == mot(s, c, i);

	}
	return (tab);
}


int	main(void)
{
	char const	a1[] = "tousalesajoursajyapense";

	printf("%i\n", wordcount(a1, 'a'));
	return (0);
}


char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		t;
	char	**tab;

	i = 0;
	t = wordcount(s, c);
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			tab[t][j] = '\0';
			t++;
			i++;
		}
		else
		{
			tab[t][j] = s[i];
			i++;
			j++;
		}
	}
	return (tab);
}*/
