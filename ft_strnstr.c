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
	size_t	i;
	size_t	ndl_len;
	size_t	hay_len;

	i = 0;
	if ((!hay || !ndl) && !len)
		return (NULL);
	hay_len = ft_strlen(hay);
	ndl_len = ft_strlen(ndl);
	if (!ndl_len)
		return ((char *)hay);
	if (ndl_len > len)
		return (NULL);
	if (len > hay_len)
		len = hay_len;
	while (len >= ndl_len)
	{
		if (ft_strncmp(&hay[i], ndl, ndl_len) == 0)
			return ((char *)&hay[i]);
		len--;
		i++;
	}
	return (NULL);
}
