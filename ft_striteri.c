/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:06:01 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:06:08 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_striteri                                                              */
/* ------------------------------------------------------------------------- */
/*   PROTO: void ft_striteri(char *s, void (*f)(unsigned int, char*))       */
/*   PARAM: s     -> string to iterate                                       */
/*          f     -> function to apply to each character                     */
/*   RETUN: none                                                             */
/*   DESC:  applies f to each character of s with its index, modifies s      */
/*   ERROR: !no action if s is NULL or f is NULL                            */
/*          !modifies string in place, no allocation                         */
/*          !index passed to f starts at 0                                   */
/* ************************************************************************** */
