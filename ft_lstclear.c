/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:15:44 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:15:48 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_lstclear                                                              */
/* ------------------------------------------------------------------------- */
/*   PROTO: void ft_lstclear(t_list **lst, void (*del)(void *))             */
/*   PARAM: lst   -> pointer to pointer to first node                        */
/*          del   -> function to delete node's content                       */
/*   RETUN: none                                                             */
/*   DESC:  deletes and frees entire list, sets head pointer to NULL         */
/*   ERROR: !no action if lst is NULL or del is NULL                         */
/*          !must handle del function failing                                */
/*          !must protect against losing list if malloc fails                */
/*          !no protection against circular lists                            */
/* ************************************************************************** */
