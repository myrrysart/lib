/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:14:58 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:15:20 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_lstdelone                                                             */
/* ------------------------------------------------------------------------- */
/*   PROTO: void ft_lstdelone(t_list *lst, void (*del)(void*))              */
/*   PARAM: lst   -> node to delete                                          */
/*          del   -> function to delete node's content                       */
/*   RETUN: none                                                             */
/*   DESC:  frees node's content using del and frees node                    */
/*   ERROR: !no action if lst is NULL or del is NULL                         */
/*          !does not handle next pointer (caller's responsibility)          */
/*          !del must handle NULL content if possible                        */
/* ************************************************************************** */
