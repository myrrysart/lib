/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:49:52 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/10/31 14:53:37 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_isascii                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: int ft_isascii(int c)                                            */
/*   PARAM: c     -> character to test                                       */
/*   RETUN: 1 if character is in ASCII range (0-127), 0 if not              */
/*   DESC:  validates if character fits in 7-bit ASCII encoding              */
/*   ERROR: !will return 0 for valid extended ASCII characters (128-255)     */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
