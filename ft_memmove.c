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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*res;

	i = 0;
	source = (unsigned char *)src;
	res = (unsigned char *)dst;
	if(!source || !res)
		return (NULL);
	if (res > source)
	{
		while (len - i++ > 0)
			res[len - i] = source[len - i];
	}
	else
	{
		while (i < len)
		{
			res[i] = source[i];
			i++;
		}
	}
	return (res);
}
