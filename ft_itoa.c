/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:45:26 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:05:31 by Jyniemit         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	char	*ptr;
	char	*res;

	//allocate initial memory
	if ( n < 0 )

}
