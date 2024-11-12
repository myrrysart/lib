/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:59:58 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:00:07 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_calloc                                                                */
/* ------------------------------------------------------------------------- */
/*   PROTO: void *ft_calloc(size_t count, size_t size)                      */
/*   PARAM: count -> number of elements to allocate                          */
/*          size  -> size of each element                                    */
/*   RETUN: pointer to allocated memory, or NULL if allocation fails         */
/*   DESC:  allocates memory for array and initializes all bytes to zero     */
/*   ERROR: !returns NULL if count * size causes integer overflow            */
/*          !returns NULL if memory allocation fails                         */
/*          !no protection against unreasonable allocation sizes             */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = NULL;
	i = 0;
	if (count > SIZE_MAX/size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < count * size)
		ptr[i++] = 0;
	return (ptr);
}
