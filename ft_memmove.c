/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:41:32 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 12:41:47 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_memmove                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: void *ft_memmove(void *dst, const void *src, size_t len)        */
/*   PARAM: dst   -> pointer to destination memory area                      */
/*          src   -> pointer to source memory area                           */
/*          len   -> number of bytes to copy                                 */
/*   RETUN: pointer to destination memory area                               */
/*   DESC:  copies len bytes from src to dst. Handles overlapping memory     */
/*   ERROR: !undefined behavior if dst or src is NULL                        */
/*          !no bounds checking beyond len                                   */
/* ************************************************************************** */

#include "libft.h"

static void	normal_memmove(unsigned char *res, unsigned char *source, size_t n)
{
	while (n > 0)
	{
		*(res++) = *(source++);
		n--;
	}
}

static void reverse_memmove(unsigned char *res, unsigned char *source, size_t n)
{
		while (n-- >= 0)
			res[n] = source[n];
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*res;
	unsigned char	*source;
	int				normal;

	i = 0;
	res = (unsigned char *)dst;
	source = (unsigned char *)src;
	normal = 1;
	while (i < len)
	{
		if (&source[i] == res)
			normal = 0;
		i++;
	}	
	if (normal)
		normal_memmove(res, source, len);
	else
		reverse_memmove(res, source, len);
	return(dst);
}
