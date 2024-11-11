/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:47:32 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 12:48:02 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_strlcpy                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)   */
/*   PARAM: dst     -> destination string buffer                             */
/*          src     -> source string to copy                                */
/*          dstsize -> size of destination buffer                           */
/*   RETUN: length of src string (excluding null terminator)                */
/*   DESC:  safer string copy that ensures null-termination                 */
/*   ERROR: !undefined behavior if dst or src is NULL                       */
/*          !if dstsize=0, dst is not modified                             */
/*          !truncation occurs if src length >= dstsize                     */
/* ************************************************************************** */
