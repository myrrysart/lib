/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:46:46 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 12:46:51 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_memcmp                                                                */
/* ------------------------------------------------------------------------- */
/*   PROTO: int ft_memcmp(const void *s1, const void *s2, size_t n)         */
/*   PARAM: s1    -> pointer to first memory area                           */
/*          s2    -> pointer to second memory area                          */
/*          n     -> number of bytes to compare                             */
/*   RETUN: 0 if identical, <0 if s1<s2, >0 if s1>s2                       */
/*   DESC:  compares memory areas. Used for binary data comparison         */
/*   ERROR: !undefined behavior if s1 or s2 is NULL                         */
/*          !no bounds checking beyond n bytes                              */
/* ************************************************************************** */
