/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:52:10 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/11/04 12:52:32 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_iswhitespace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while(ft_iswhitespace((int) str[i]))
		i++;
	if (str[i] == '-')
	{
		sign *= -sign;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while(ft_isdigit((int) str[i]))
	{
		res = res * 10;
		res += str[i] - '0';
	}
	return (res * sign);
}
