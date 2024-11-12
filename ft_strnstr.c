/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:55:57 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 17:03:26 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_strnstr                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: char *ft_strnstr(const char *hay, const char *ndl, size_t len)  */
/*   PARAM: hay   -> string to search in (haystack)                          */
/*          ndl   -> string to search for (needle)                           */
/*          len   -> maximum number of characters to search                  */
/*   RETUN: pointer to first match in hay, or NULL if not found             */
/*   DESC:  locates first occurrence of ndl in hay, limited by len          */
/*   ERROR: !undefined behavior if hay or ndl is NULL                        */
/*          !returns hay if ndl is empty string                             */
/*          !will not find matches if len < needle length                    */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t len)
{
	int	i;

	i = 0;
	if (*ndl == '\0')
		return (hay);
	while (hay[i] && len)
	{
		if (ft_strncmp(&hay[i], ndl, len))
			return (&hay[i])
		len--;
		i++;
	}
}
