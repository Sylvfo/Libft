/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:32:00 by sforster          #+#    #+#             */
/*   Updated: 2023/10/31 16:59:34 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

const char	*ft_strnstr(const char *hays, const char *needle, size_t l)
{
	size_t	i;
	size_t	a;

	a = 0;
	i = 0;
	if (ft_strlen(needle) == 0)
		return (hays);
	while (i < (l - ft_strlen(needle)) && ((l - ft_strlen(needle)) > 0))
	{
		while (needle[a])
		{
			if (needle[a] == hays[i + a])
			{
				if ((needle[a + 1] == '\0') || (a == l - 1))
					return (hays + i);
				else
					a++;
			}
			if (needle[a] != hays[i + a])
				break ;
		}
	a = 0;
	i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	hay[] = "lorem ipsum dolor sit amet";
	const char	ned[] = "sit";

	printf("%s\n", ft_strnstr(hay, ned, 18));

	const char	ha[] = "lorem ipsum dolor sit amet";
	const char	ne[] = "do";

	printf("%s\n", ft_strnstr(ha, ne, 2));
	return (0);
}


#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

const char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	if (ft_strlen(needle) == 0)
		return (haystack);
	while (haystack[i])
	{
		if (haystack[i] != needle[a])
			i++;
		else
		{
			while (a < len)
			{
				if (needle[a] == haystack[i + a])
				{
					if ((needle[a + 1] == '\0') || (a == len - 1))
						return (haystack + i);
					else
						a++;
				}
				if (needle[a] != haystack[i + a])
					break ;
			}
		a = 0;
		i++;
		}
	}
	return (NULL);
}

const char	*ft_strnstr(const char *hays, const char *needle, size_t l)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	if (ft_strlen(needle) == 0)
		return (hays);
	while (hays[i])
	{
		while (a < (int)l)
		{
			if (needle[a] == hays[i + a])
			{
				if ((needle[a + 1] == '\0') || (a == (int)l - 1))
					return (hays + i);
				else
					a++;
			}
			if (needle[a] != hays[i + a])
				break ;
		}
	a = 0;
	i++;
	}
	return (NULL);
}

*/