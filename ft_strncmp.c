/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:55:38 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 16:50:55 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_strncmp                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: int ft_strncmp(const char *s1, const char *s2, size_t n)        */
/*   PARAM: s1    -> first string to compare                                 */
/*          s2    -> second string to compare                                */
/*          n     -> maximum number of characters to compare                 */
/*   RETUN: 0 if identical, <0 if s1<s2, >0 if s1>s2                        */
/*   DESC:  compares up to n characters of two strings                       */
/*   ERROR: !undefined behavior if s1 or s2 is NULL                          */
/*          !comparison stops at first null byte even if n not reached       */
/*          !returns 0 if n=0 regardless of strings                          */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] != s2[i] && n--)
		i++;
	return (s1[i] - s2[i]);
}
