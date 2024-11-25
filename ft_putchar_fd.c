/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:06:35 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:06:58 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_putchar_fd                                                            */
/* ------------------------------------------------------------------------- */
/*   PROTO: void ft_putchar_fd(char c, int fd)                              */
/*   PARAM: c     -> character to output                                     */
/*          fd    -> file descriptor to write to                             */
/*   RETUN: none                                                             */
/*   DESC:  outputs character c to given file descriptor                     */
/*   ERROR: !no error checking on fd validity                                */
/*          !write errors are not handled                                    */
/*          !does not handle wide characters                                 */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
