/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:04:33 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:04:39 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_split                                                                 */
/* ------------------------------------------------------------------------- */
/*   PROTO: char **ft_split(char const *s, char c)                          */
/*   PARAM: s     -> string to split                                         */
/*          c     -> delimiter character                                     */
/*   RETUN: array of new strings, NULL-terminated, or NULL if fails          */
/*   DESC:  splits string into array of substrings using delimiter           */
/*   ERROR: !returns NULL if s is NULL or if any allocation fails            */
/*          !must free all allocated strings AND array on error              */
/*          !consecutive delimiters result in no empty strings               */
/*          !requires counting splits before allocation                      */
/* ************************************************************************** */

#include "libft.h"

const size_t	ft_countstrings(char const *s, char c)
{
	char const	*pos;
	size_t		i;
	pos = s;
	i = 0;
	while(pos)
	{
		pos = ft_strchr(pos, c);
		while (*pos == c)
			pos++;
		i++;
	}
	return (i);
}
char	**ft_split(char const *s, char c)
{
	char		**res;
	size_t		height;
	size_t		i;
	char const	*pos;

	res = NULL;
	height = 0;
	i = 0;
	pos = s;
	while (s[i] != '\0')
	{
		 pos = ft_strchr(s, c);
		if (pos)
			height++;
		i++;
	}
	res = ft_calloc(height, sizeof(char *));
	if (!res)
		return (NULL);
	 
	return (res);
}
