/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:09:13 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:09:34 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_lstnew                                                                */
/* ------------------------------------------------------------------------- */
/*   PROTO: t_list *ft_lstnew(void *content)                                 */
/*   PARAM: content -> data to put in new node                               */
/*   RETUN: pointer to new node, or NULL if allocation fails                 */
/*   DESC:  creates new list node with content and NULL next pointer         */
/*   ERROR: !returns NULL if malloc fails                                    */
/*          !content can be NULL (valid case)                                */
/*          !no deep copy of content (just pointer assignment)               */
/* ************************************************************************** */
