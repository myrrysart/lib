/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:05:38 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:05:45 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_strmapi                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: char *ft_strmapi(char const *s, char (*f)(unsigned int, char))   */
/*   PARAM: s     -> string to map                                           */
/*          f     -> function to apply to each character                     */
/*   RETUN: new string with function applied to each char, or NULL if fail   */
/*   DESC:  creates new string by applying f to each char with its index     */
/*   ERROR: !returns NULL if s is NULL, f is NULL, or if malloc fails        */
/*          !must allocate exact size of input string                        */
/*          !index passed to f starts at 0                                   */
/* ************************************************************************** */
