/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:08:24 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:09:06 by Jyniemit         ###   ########.fr       */
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
/*          !recursive calls could stack up with large numbers               */
/* ************************************************************************** */
