/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:10:09 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:10:15 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_lstadd_front                                                          */
/* ------------------------------------------------------------------------- */
/*   PROTO: void ft_lstadd_front(t_list **lst, t_list *new)                 */
/*   PARAM: lst   -> pointer to pointer to first node                        */
/*          new   -> node to add at start                                    */
/*   RETUN: none                                                             */
/*   DESC:  adds new node at beginning of list                               */
/*   ERROR: !no action if lst is NULL or new is NULL                         */
/*          !no protection against circular lists                            */
/*          !new->next must be updated before lst assignment                 */
/* ************************************************************************** */
