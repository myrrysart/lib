/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:47:19 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 12:48:38 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_strlcat                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: size_t ft_strlcat(char *dst, const char *src, size_t dstsize)   */
/*   PARAM: dst     -> destination string buffer                               */
/*          src     -> string to concatenate                                  */
/*          dstsize -> size of destination buffer                             */
/*   RETUN: intended total length (initial dst len + src len)                 */
/*   DESC:  safer string concatenation that ensures null-termination          */
/*   ERROR: !undefined behavior if dst or src is NULL                         */
/*          !if dstsize <= strlen(dst), returns dstsize + strlen(src)         */
/*          !truncation occurs if combined length >= dstsize                  */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstlen >= dstsize)
		return(dstsize + srclen);
	while(dstlen + i < dstsize - 1 && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if(dstlen + i < dstsize)
		dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
