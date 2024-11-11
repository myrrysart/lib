/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:30:40 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/10/31 14:33:52 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_isalpha                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: int ft_isalpha(int c)                                            */
/*   PARAM: c     -> character to test                                       */
/*   RETUN: 1 if character is alphabetic (A-Z, a-z), 0 if not               */
/*   DESC:  tests if a character is a letter, used for string validation     */
/*   ERROR: !undefined behavior with values outside unsigned char range       */
/*          !implementation may vary with different locale settings          */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
