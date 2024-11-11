/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:03:24 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:03:58 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_strjoin                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: char *ft_strjoin(char const *s1, char const *s2)                */
/*   PARAM: s1    -> prefix string                                           */
/*          s2    -> suffix string                                           */
/*   RETUN: new concatenated string, or NULL if allocation fails             */
/*   DESC:  combines two strings into new allocated string                   */
/*   ERROR: !returns NULL if s1 or s2 is NULL or if malloc fails            */
/*          !no protection against combined length exceeding SIZE_MAX        */
/*          !allocates exact size needed (strlen(s1) + strlen(s2) + 1)      */
/* ************************************************************************** */

