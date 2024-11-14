/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:48:56 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 12:49:06 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_strchr                                                                */
/* -------------------------------------------------------------------------- */
/*   PROTO: char *ft_strchr(const char *s, int c)                             */
/*   PARAM: s     -> string to search in                                      */
/*          c     -> character to find (converted to char)                    */
/*   RETUN: pointer to first occurrence of c, or NULL if not found            */
/*   DESC:  locates character in string, including null terminator            */
/*   ERROR: !undefined behavior if s is NULL                                  */
/*          !searching for '\0' returns pointer to string end                 */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
