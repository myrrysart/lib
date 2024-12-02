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

size_t	ft_count_array_height(char const *s, char c)
{
	size_t		i;
	size_t		result;
	int			count;

	i = 0;
	result = 0;
	count= 0;
	while (s[i])
	{
		count = 1;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			if (count)
			{
				count = 0;
				result++;
			}
			i++;
		}
	}
	return (result);
}

int	ft_safe_save(char **dest, char const *source, size_t len, int loc)
{
	if (!source || !dest)
		return (1);
	dest[loc] = ft_calloc(len, sizeof(char));
	if (!dest[loc])
	{
		while (loc-- >= 0)
			free(dest[loc]);
		return (1);
	}
	ft_strlcpy(dest[loc], source, len);
	return (0);
}

int	ft_save_strings(char **dest, char const *source, char c)
{
	char const	*pos;
	size_t		len;
	int			i;

	pos = source;
	len = 0;
	i = 0;
	while (*pos)
	{
		len = 0;
		while(*pos == c && *pos)
			pos++;
		while(*pos != c && *pos)
		{
			len++;
			pos++;
		}
		if (ft_safe_save(dest, pos - len, len + 1, i++))
			return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	size_t		height;
	size_t		i;
	char const	*pos;

	res = NULL;
	pos = s;
	i = 0;
	height = 0;
	if (!pos)
		return (NULL);
	height = ft_count_array_height(s, c);
	res = malloc(sizeof(char *) * (height + 1));
	if (!res)
		return (NULL);
	res[height] = NULL;
	if(ft_save_strings(res, s, c))
	{
		free (res);
		return (NULL);
	}
	return (res);
}
