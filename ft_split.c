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
	size_t		j;
	int			count;

	i = 0;
	j = 0;
	count= 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			i++;
			count= 1;
		}
		if (count)
		{
			count = 0;
			j++;
		}
		while (s[i] == c && s[i])
			i++;
	}
	return (j);
}

void	ft_save_strings(char **dest, char const *source, char c, size_t count)
{
	(void)c;	
	(void)dest;	
	(void)source;	
	(void)count;	
	char	*pos;
	size_t	len;
	size_t	i;

	pos = source;
	len = 
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
	res = ft_calloc(height, sizeof(char *));
	if (!res)
		return (NULL);
	ft_save_strings(res, s, c, height);
	return (res);
}

int	main(void)
{
	char const	*str="hello world";
	char		c = ' ';
	ft_split(str, c);
	return (0);
}
