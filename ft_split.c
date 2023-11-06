/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:04:12 by sforster          #+#    #+#             */
/*   Updated: 2023/11/06 17:18:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	wordcount(char const *s, char c);
static char	*ft_mot(const char *str, int start, int end);
static void	ft_initiate_vars(int *i, int *j, int *s_word);
static void	*ft_free(char **tbl, int count);

static int	wordcount(char const *s, char c)
{
	int	co;
	int	i;

	co = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			co++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (co);
}

static void	ft_initiate_vars(int *i, int *j, int *s_word)
{
	*i = 0;
	*j = 0;
	*s_word = -1;
}

static char	*ft_mot(const char *str, int start, int end)
{
	int		i;
	char	*mot;

	i = 0;
	mot = malloc(((end - start) + 1) * sizeof(char));
	if (!mot)
		return (NULL);
	while (start < end)
	{
		mot[i] = (char)str[start];
		i++;
		start++;
	}
	mot[i] = '\0';
	return (mot);
}

static void	*ft_free(char **tbl, int co)
{
	int	i;

	i = 0;
	while (i < co)
	{
		free(tbl[i]);
		i++;
	}
	free(tbl);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		s_word;
	char	**tab;

	ft_initiate_vars(&i, &j, &s_word);
	tab = ft_calloc((wordcount(s, c) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && s_word < 0)
			s_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && s_word >= 0)
		{
			tab[j] = ft_mot(s, s_word, i);
			if (!(tab[j]))
				return (ft_free(tab, j));
			s_word = -1;
			j++;
		}
		i++;
	}
	return (tab);
}

/*
int	main(void)
{
	char const	a1[] = "tousalesajoursajyapense";

	printf("%i\n", wordcount(a1, 'a'));
	return (0);
}


char	**ft_split(char const *s, char c)
{
	size_t	i; index pour s
	int		j; index premier pour tableau. tab[j]
	int		s_word; ??
	char	**tab; tableau

	ft_initiate_vars(&i, &j, &s_word);
	res = ft_calloc((wordcount(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i]) !!
	{
		if(s[i] != c && s_word < 0)???
			s_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && s_word >= 0)??
		{
			tab[j] = ft_mot(s, s_word, i);???
			if (!(tab[j]))
				return (ft_free(tab, j));?????
			s_word = -1;
			j++;
		}
		i++;
	}
	return (tab);
}

static int	wordcount(char const *s, char c)
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
*/