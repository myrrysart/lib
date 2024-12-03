/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:49:15 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 12:55:28 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_strrchr                                                               */
/* -------------------------------------------------------------------------- */
/*   PROTO: char *ft_strrchr(const char *s, int c)                            */
/*   PARAM: s     -> string to search in                                      */
/*          c     -> character to find (converted to char)                    */
/*   RETUN: pointer to last occurrence of c, or NULL if not found             */
/*   DESC:  locates last occurrence of character in string                    */
/*   ERROR: !undefined behavior if s is NULL                                  */
/*          !searching for '\0' returns pointer to string end                 */
/*          !must scan entire string even if character is found early         */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((char)c == 0)
		return ((char *)&s[len]);
	while (len > 0 && s[len - 1] != (char)c)
		len--;
	if (len)
		return ((char *)&s[len - 1]);
	return (NULL);
}
