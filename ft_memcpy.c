/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:41:07 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 12:41:11 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_memcpy                                                                */
/* ------------------------------------------------------------------------- */
/*   PROTO: void *ft_memcpy(void *dst, const void *src, size_t n)           */
/*   PARAM: dst   -> pointer to destination memory area                      */
/*          src   -> pointer to source memory area                           */
/*          n     -> number of bytes to copy                                 */
/*   RETUN: pointer to destination memory area                               */
/*   DESC:  copies n bytes from src to dst. Memory areas must not overlap    */
/*   ERROR: !undefined behavior if dst or src is NULL                        */
/*          !undefined behavior if memory areas overlap                      */
/*          !no bounds checking beyond n                                     */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*res;
	unsigned char	*source;

	res = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!res || !source)
		return (dst);
	while (n > 0)
	{
		*(res++) = *(source++);
		n--;
	}
	return (dst);
}
