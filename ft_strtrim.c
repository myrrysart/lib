/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:04:06 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:04:20 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_strtrim                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: char *ft_strtrim(char const *s1, char const *set)               */
/*   PARAM: s1    -> string to trim                                          */
/*          set   -> characters to trim from start and end                   */
/*   RETUN: new trimmed string, or NULL if allocation fails                  */
/*   DESC:  removes specified characters from start and end of string        */
/*   ERROR: !returns NULL if s1 or set is NULL or if malloc fails           */
/*          !returns empty string if s1 consists entirely of set chars       */
/*          !only removes characters from ends, not middle of string         */
/* ************************************************************************** */

