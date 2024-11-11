/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:25:02 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 16:44:33 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*   ft_strlen                                                                */
/* -------------------------------------------------------------------------- */
/*   PROTO: size_t ft_strlen(const char *s)                                   */
/*   PARAM: s     -> null-terminated string to measure                        */
/*   RETUN: count of chars before first null byte                             */
/*   DESC:  counts string length, fundamental for memory/bounds checks        */
/*   ERROR: !undefined behavior with NULL pointer                             */
/*          !cannot detect if string lacks null terminator                    */
/*          !will continue counting beyond SIZE_MAX causing overflow          */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}
