/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:16:39 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/11 13:16:55 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*   ft_lstmap                                                                */
/* ------------------------------------------------------------------------- */
/*   PROTO: t_list *ft_lstmap(t_list *lst, void *(*f)(void *),              */
/*                           void (*del)(void *))                             */
/*   PARAM: lst   -> pointer to first node                                   */
/*          f     -> function to apply to create new content                 */
/*          del   -> function to delete content if operation fails           */
/*   RETUN: new list with transformed content, or NULL if fails              */
/*   DESC:  creates new list by applying f to each node's content            */
/*   ERROR: !returns NULL if lst is NULL, f is NULL, or first malloc fails   */
/*          !must use del and free all if any allocation fails               */
/*          !must protect against f returning NULL                           */
/*          !no protection against circular lists                            */
/* ************************************************************************** */
