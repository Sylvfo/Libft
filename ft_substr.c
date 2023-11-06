/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:15:43 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 17:15:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (size_t)ft_strlen(s + start))
		len = (size_t)ft_strlen(s + start);
	dst = ft_calloc(len + 1, sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = s[(size_t)start + i];
		i++;
	}
	return (dst);
}

/*
int	main(void)
{
	char const		ta[] = "Il pleut beaucoup ces temps";
	
	printf("%s\n", ft_substr(ta, 20, 19));

	return (0);
}



	if (len + (size_t)start > (size_t)ft_strlen(s))
		len = (size_t)ft_strlen(s) - (size_t)start; 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;
	
	dst = (char *)malloc(len + 1 * sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = s[(size_t)start];
		i++;
		start++;
	}
	i++;
	dst[i] = '\0';
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	dst = (char *)malloc(len * sizeof(char));
	if (!dst)
		return (NULL);
	if (!s)
		return (NULL);
	if ((int)start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	if ((int)len > ft_strlen(s + start))
		len = ft_strlen(s + (unsigned int)start);
	while (i < len)
	{
		dst[i] = s[((unsigned int)start + i)];
		i++;
	}
	return (dst);
}
*/