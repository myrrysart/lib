/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:03:24 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:03:58 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_strjoin                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: char *ft_strjoin(char const *s1, char const *s2)                */
/*   PARAM: s1    -> prefix string                                           */
/*          s2    -> suffix string                                           */
/*   RETUN: new concatenated string, or NULL if allocation fails             */
/*   DESC:  combines two strings into new allocated string                   */
/*   ERROR: !returns NULL if s1 or s2 is NULL or if malloc fails            */
/*          !no protection against combined length exceeding SIZE_MAX        */
/*          !allocates exact size needed (strlen(s1) + strlen(s2) + 1)      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*res;

	len = 0;
	res = NULL;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, len + 1);
	ft_strlcpy(&res[ft_strlen(s1)], s2, len - ft_strlen(s1) + 1);
	res[len] = '\0';
	return (res);
}
