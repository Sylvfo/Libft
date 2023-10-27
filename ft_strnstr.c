/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:32:00 by sforster          #+#    #+#             */
/*   Updated: 2023/10/27 16:06:08 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (NULL);
}

int	main(void)
{
	const char	hay[] = "Le seul monde connu";
	const char	ned[] = "mande";

	printf("%s\n", ft_strnstr(hay, ned, 3));
	return (0);
}

/*
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
}*/