/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeier <jmeier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 11:08:59 by jmeier            #+#    #+#             */
/*   Updated: 2017/09/22 16:39:42 by jmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_atoi(const char *str)
{
	int		sign;
	int		i;
	long	res;

	res = 0;
	i = 0;
	sign = 1;
	while ((str[i] == '\n' || str[i] == '\t' || str[i] == '\v') ||
			(str[i] == ' ' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
		res = res * 10 + (str[i++] - '0');
	return (res * sign);
}
