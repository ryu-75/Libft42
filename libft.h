/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:17:17 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/07 17:43:46 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <bsd/string.h>
# include <string.h>
# include <stddef.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(unsigned int nmemb, size_t size);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strchr(const char *p, int c);
char	*ft_strdup(const char *str);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);

#endif //LIBFT_H
