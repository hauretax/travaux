/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:38:03 by hutricot          #+#    #+#             */
/*   Updated: 2018/11/07 11:11:04 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>

void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *src, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_strlen(char *str);
char			*ft_strdup(char *src);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strncat(char *dest, const char *src, size_t n);
unsigned int	ft_strlcat(char *dest, const char *src, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strnstr(char *str, char *to_find, size_t n);
int				ft_isalpha(char *str);
int				ft_isdigit(char *str);
int				ft_isalnum(char *str);
int				ft_isascii(char *str);
int				ft_isprint(char *str);
char			*ft_toupper(char *str);
char			*ft_tolower(char *str);
int				ft_atoi(const char *str);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
void			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *s));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);

#endif
