/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:09:47 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 16:09:51 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_memset                                                                */
/* ------------------------------------------------------------------------- */
/*   PROTO: void *ft_memset(void *b, int c, size_t len)                      */
/*   PARAM: b     -> pointer to memory area to fill                          */
/*          c     -> value to fill with (converted to unsigned char)         */
/*          len   -> number of bytes to fill                                 */
/*   RETUN: pointer to memory area b                                         */
/*   DESC:  fills memory with a constant byte, useful for buffer clearing    */
/*   ERROR: !undefined behavior if b is NULL                                 */
/*          !no bounds checking beyond len                                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = b;
	if (!len)
		return (b);
	while (i < len)
		tmp[i++] = (unsigned char)c;
	return (b);
}
