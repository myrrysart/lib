/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:07:11 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:07:39 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_putstr_fd                                                             */
/* ------------------------------------------------------------------------- */
/*   PROTO: void ft_putstr_fd(char *s, int fd)                              */
/*   PARAM: s     -> string to output                                        */
/*          fd    -> file descriptor to write to                             */
/*   RETUN: none                                                             */
/*   DESC:  outputs string s to given file descriptor                        */
/*   ERROR: !no action if s is NULL                                          */
/*          !no error checking on fd validity                                */
/*          !write errors are not handled                                    */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
