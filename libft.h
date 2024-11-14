/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:30:50 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/10/30 16:35:50 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    LIBFT_H
# define    LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdint.h>

int	ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	ft_itoa(int c);
int	ft_lstadd_back(int c);
int	ft_lstadd_front(int c);
int	ft_lstclear(int c);
int	ft_lstdelone(int c);
int	ft_lstiter(int c);
int	ft_lstlast(int c);
int	ft_lstmap(int c);
int	ft_lstnew(int c);
int	ft_lstsize(int c);
int	ft_memchr(int c);
int	ft_memcmp(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
int	ft_putchar_fd(int c);
int	ft_putendl_fd(int c);
int	ft_putnbr_fd(int c);
int	ft_putstr_fd(int c);
int	ft_split(int c);
char	*ft_strchr(const char *s, int c);
int	ft_strdup(int c);
int	ft_striteri(int c);
int	ft_strjoin(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int	ft_strmapi(int c);
int	ft_strncmp(int c);
int	ft_strnstr(int c);
int	ft_strrchr(int c);
int	ft_strtrim(int c);
int	ft_substr(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
#endif
