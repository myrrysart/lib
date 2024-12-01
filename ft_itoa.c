/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:45:26 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 16:41:48 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_itoa                                                                  */
/* ------------------------------------------------------------------------- */
/*   PROTO: char *ft_itoa(int n)                                            */
/*   PARAM: n     -> integer to convert                                      */
/*   RETUN: new string representing number, or NULL if allocation fails      */
/*   DESC:  converts integer to string, handling negatives and INT_MIN       */
/*   ERROR: !returns NULL if malloc fails                                    */
/*          !must handle INT_MIN (-2147483648) specially                     */
/*          !allocates exact size needed (digits + sign if negative)         */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_intmin_handler(void)
{
	char	*res;

	res = malloc(sizeof(char) * 12);
	ft_strlcpy(res, "-2147483648", 12);
	return (res);
}
char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	res = NULL;
	if (n == INT_MIN)
	{
		res = ft_intmin_handler();
		return (res);
	}
	len = ft_getlen(n);
	return (res);
}
