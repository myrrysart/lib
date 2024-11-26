/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:42:04 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 12:46:39 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_memchr                                                                */
/* ------------------------------------------------------------------------- */
/*   PROTO: void *ft_memchr(const void *s, int c, size_t n)                 */
/*   PARAM: s     -> pointer to memory area to search                        */
/*          c     -> value to search for (converted to unsigned char)        */
/*          n     -> number of bytes to search                               */
/*   RETUN: pointer to matching byte or NULL if not found within n bytes     */
/*   DESC:  locates first occurrence of c in s. Raw memory search function   */
/*   ERROR: !undefined behavior if s is NULL                                 */
/*          !no bounds checking beyond n                                     */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*ret;

	i = 0;
	ret = s;
	while (i < n)
	{
		if (ret[i] == (unsigned char)c)
			return ((void *)(ret + i));
		i++;
	}
	return (NULL);
}
