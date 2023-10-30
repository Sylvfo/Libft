/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:06:33 by sforster          #+#    #+#             */
/*   Updated: 2023/10/30 16:19:13 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <unistd.h>
#include <stdlib.h>

int				ft_atoi(const char *str);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_strlen(const char *str);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);

void			*ft_memchr(const void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);

char			*ft_strchr(const char *s, int c);
char			*ft_strchr(const char *s, int c);

unsigned int	ft_strlcat(char *dst, const char *src, size_t dstsize);
int				ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);

const char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

char			*ft_strrchr(const char *s, int c);
/* fonctions qui manquent: strlcpy, memcmp, calloc, strdup 

type structure???*/

#endif