/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:04:33 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:04:39 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_split                                                                 */
/* ------------------------------------------------------------------------- */
/*   PROTO: char **ft_split(char const *s, char c)                          */
/*   PARAM: s     -> string to split                                         */
/*          c     -> delimiter character                                     */
/*   RETUN: array of new strings, NULL-terminated, or NULL if fails          */
/*   DESC:  splits string into array of substrings using delimiter           */
/*   ERROR: !returns NULL if s is NULL or if any allocation fails            */
/*          !must free all allocated strings AND array on error              */
/*          !consecutive delimiters result in no empty strings               */
/*          !requires counting splits before allocation                      */
/* ************************************************************************** */

