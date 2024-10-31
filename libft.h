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

int	ft_atoi(int c);
int	ft_bzero(int c);
int	ft_calloc(int c);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_itoa(int c);
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
int	ft_memcpy(int c);
int	ft_memmove(int c);
int	ft_memset(int c);
int	ft_putchar_fd(int c);
int	ft_putendl_fd(int c);
int	ft_putnbr_fd(int c);
int	ft_putstr_fd(int c);
int	ft_split(int c);
int	ft_strchr(int c);
int	ft_strdup(int c);
int	ft_striteri(int c);
int	ft_strjoin(int c);
int	ft_strlcat(int c);
int	ft_strlcpy(int c);
int	ft_strlen(int c);
int	ft_strmapi(int c);
int	ft_strncmp(int c);
int	ft_strnstr(int c);
int	ft_strrchr(int c);
int	ft_strtrim(int c);
int	ft_substr(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
#endif
