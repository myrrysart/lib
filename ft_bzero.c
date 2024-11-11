/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:40:08 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 12:40:55 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_bzero                                                                 */
/* ------------------------------------------------------------------------- */
/*   PROTO: void ft_bzero(void *s, size_t n)                                 */
/*   PARAM: s     -> pointer to memory area to zero                          */
/*          n     -> number of bytes to zero                                 */
/*   RETUN: none                                                             */
/*   DESC:  writes n zeroed bytes to string s. Erases data in memory block  */
/*   ERROR: !undefined behavior if s is NULL                                 */
/*          !no bounds checking beyond n                                     */
/* ************************************************************************** */
