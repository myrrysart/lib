/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:10:56 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:14:17 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_lstlast                                                               */
/* ------------------------------------------------------------------------- */
/*   PROTO: t_list *ft_lstlast(t_list *lst)                                 */
/*   PARAM: lst   -> pointer to first node                                   */
/*   RETUN: pointer to last node in list, or NULL if list empty              */
/*   DESC:  finds last node in linked list                                   */
/*   ERROR: !returns NULL if lst is NULL                                     */
/*          !no protection against circular lists (infinite loop)             */
/*          !must traverse entire list to find last node                     */
/* ************************************************************************** */
