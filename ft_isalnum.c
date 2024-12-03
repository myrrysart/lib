/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:53:46 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/10/31 14:59:11 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_isalnum                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: int ft_isalnum(int c)                                            */
/*   PARAM: c     -> character to test                                       */
/*   RETUN: 1 if character is alphanumeric (A-Z, a-z, 0-9), 0 if not        */
/*   DESC:  combines isalpha and isdigit checks for input validation         */
/*   ERROR: !undefined behavior with values outside unsigned char range       */
/*          !implementation may vary with different locale settings          */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
