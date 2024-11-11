/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:29:18 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/10/30 15:29:23 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_isdigit                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: int ft_isdigit(int c)                                            */
/*   PARAM: c     -> character to test                                       */
/*   RETUN: 1 if character is digit (0-9), 0 if not                         */
/*   DESC:  tests if a character is a decimal digit, for input validation    */
/*   ERROR: !undefined behavior with values outside unsigned char range       */
/* ************************************************************************** */

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
