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
/*   PARAM: dst     -> destination string buffer                             */
/*          src     -> string to concatenate                                */
/*          dstsize -> size of destination buffer                           */
/*   RETUN: intended total length (initial dst len + src len)               */
/*   DESC:  safer string concatenation that ensures null-termination        */
/*   ERROR: !undefined behavior if dst or src is NULL                       */
/*          !if dstsize <= strlen(dst), returns dstsize + strlen(src)      */
/*          !truncation occurs if combined length >= dstsize                */
/* ************************************************************************** */
