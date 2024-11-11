/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:07:54 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:08:19 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_putendl_fd                                                            */
/* ------------------------------------------------------------------------- */
/*   PROTO: void ft_putendl_fd(char *s, int fd)                             */
/*   PARAM: s     -> string to output                                        */
/*          fd    -> file descriptor to write to                             */
/*   RETUN: none                                                             */
/*   DESC:  outputs string s to fd, followed by newline                      */
/*   ERROR: !no action if s is NULL                                          */
/*          !no error checking on fd validity                                */
/*          !write errors are not handled                                    */
/*          !newline might fail even if string succeeds                      */
/* ************************************************************************** */
