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

static int	ft_getlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_intmin_handler(void)
{
	char	*res;

	res = malloc(sizeof(char) * 12);
	if (!res)
		return (NULL);
	ft_strlcpy(res, "-2147483648", 12);
	return (res);
}

static char	*ft_int_parser(char *dest, int n, int len)
{
	int	offset;

	offset = 0;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	if (n < 0)
	{
		dest[offset++] = '-';
		n *= -1;
	}
	dest[len] = '\0';
	while (--len >= offset)
	{
		dest[len] = n % 10 + 48;
		n /= 10;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	res = NULL;
	if (n == INT_MIN)
	{
		res = ft_intmin_handler();
		if (!res)
			return (NULL);
		return (res);
	}
	if (n == 0)
	{
		res = malloc(sizeof(char) * 2);
		if (!res)
			return (NULL);
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	len = ft_getlen(n);
	res = ft_int_parser(res, n, len);
	return (res);
}
