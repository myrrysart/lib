/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:10:36 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:10:48 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_lstsize                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: int ft_lstsize(t_list *lst)                                      */
/*   PARAM: lst   -> pointer to first node                                   */
/*   RETUN: number of nodes in list                                          */
/*   DESC:  counts number of nodes in linked list                            */
/*   ERROR: !returns 0 if lst is NULL                                        */
/*          !no protection against circular lists (infinite loop)             */
/*          !might overflow int with extremely large lists                    */
/* ************************************************************************** */

