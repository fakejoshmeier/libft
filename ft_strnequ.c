/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeier <jmeier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 16:45:06 by jmeier            #+#    #+#             */
/*   Updated: 2017/09/22 22:30:58 by jmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if ((!s1 && s2) || (!s2 && s1))
		return (1);
	if (!s1 && !s2)
		return (0);
	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	if ((s1[i] - s2[i]) != 0)
		return (0);
	return (1);
}
