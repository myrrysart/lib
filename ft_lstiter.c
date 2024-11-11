/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:16:04 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:16:26 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_lstiter                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: void ft_lstiter(t_list *lst, void (*f)(void *))                 */
/*   PARAM: lst   -> pointer to first node                                   */
/*          f     -> function to apply to each node's content                */
/*   RETUN: none                                                             */
/*   DESC:  applies function f to content of each node in list               */
/*   ERROR: !no action if lst is NULL or f is NULL                           */
/*          !no protection against f modifying list structure                */
/*          !no protection against circular lists                            */
/* ************************************************************************** */
