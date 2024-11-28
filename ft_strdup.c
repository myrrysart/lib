/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:00:33 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:00:36 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_strdup                                                                */
/* ------------------------------------------------------------------------- */
/*   PROTO: char *ft_strdup(const char *s1)                                  */
/*   PARAM: s1    -> string to duplicate                                     */
/*   RETUN: pointer to new string, or NULL if allocation fails               */
/*   DESC:  creates new string containing copy of s1                         */
/*   ERROR: !undefined behavior if s1 is NULL                                */
/*          !returns NULL if memory allocation fails                         */
/*          !no protection against strings longer than SIZE_MAX - 1          */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dup;

	dup = NULL;
	len = ft_strlen(s1);
	dup = ft_calloc(len, sizeof(char));
	if (!dup)
		return (NULL);
	return (dup);
}
