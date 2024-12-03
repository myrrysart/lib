/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:08:24 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/12/02 10:22:44 by jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_putnbr_fd                                                             */
/* ------------------------------------------------------------------------- */
/*   PROTO: void ft_putnbr_fd(int n, int fd)                                */
/*   PARAM: n     -> integer to output                                       */
/*          fd    -> file descriptor to write to                             */
/*   RETUN: none                                                             */
/*   DESC:  outputs integer n to given file descriptor                       */
/*   ERROR: !no error checking on fd validity                                */
/*          !write errors are not handled                                    */
/*          !must handle INT_MIN specially                                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_recursive_putnbr_helper(int n, int fd)
{
	if (n == 0)
		return ;
	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
	}
	ft_recursive_putnbr_helper(n / 10, fd);
	if (n > 9)
		n = n % 10 + 48;
	else
		n += 48;
	write(fd, &n, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		write(fd, "0", 1);
	ft_recursive_putnbr_helper(n, fd);
}
