/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:03:41 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/10/31 15:05:45 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_isprint                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: int ft_isprint(int c)                                            */
/*   PARAM: c     -> character to test                                       */
/*   RETUN: 1 if character is printable (32-126), 0 if not                  */
/*   DESC:  checks if character is visible/printable, for display logic      */
/*   ERROR: !undefined behavior with values outside unsigned char range       */
/*          !does not consider extended ASCII printable characters           */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
