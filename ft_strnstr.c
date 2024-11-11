/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:55:57 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 12:56:14 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_strnstr                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: char *ft_strnstr(const char *hay, const char *ndl, size_t len)  */
/*   PARAM: hay   -> string to search in (haystack)                          */
/*          ndl   -> string to search for (needle)                           */
/*          len   -> maximum number of characters to search                  */
/*   RETUN: pointer to first match in hay, or NULL if not found             */
/*   DESC:  locates first occurrence of ndl in hay, limited by len          */
/*   ERROR: !undefined behavior if hay or ndl is NULL                        */
/*          !returns hay if ndl is empty string                             */
/*          !will not find matches if len < needle length                    */
/* ************************************************************************** */
