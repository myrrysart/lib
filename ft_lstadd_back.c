/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:09:51 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:14:45 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_lstadd_back                                                           */
/* ------------------------------------------------------------------------- */
/*   PROTO: void ft_lstadd_back(t_list **lst, t_list *new)                  */
/*   PARAM: lst   -> pointer to pointer to first node                        */
/*          new   -> node to add at end                                      */
/*   RETUN: none                                                             */
/*   DESC:  adds new node at end of list                                     */
/*   ERROR: !no action if new is NULL                                        */
/*          !if lst is NULL, creates new list with new node                  */
/*          !must traverse entire list to find end                           */
/*          !no protection against circular lists                            */
/* ************************************************************************** */

