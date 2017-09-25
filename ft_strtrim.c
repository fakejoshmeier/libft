/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeier <jmeier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 23:31:34 by jmeier            #+#    #+#             */
/*   Updated: 2017/09/24 23:33:49 by jmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	a;
	size_t	b;
	size_t	c;
	size_t	d;
	char	*str;

	a = 0;
	while (s[a++] && !c)
		if (s[a] != ' ' || s[a] != '\n' || s[a] != '\t')
			c = a;
	b = ft_strlen(s);
	while (s[b--] && !d)
		if (s[b] != ' ' || s[b] != '\n' || s[b] != '\t')
			d = b;
	str = ft_strnew((ft_strlen(s) - c) - (ft_strlen(s) - d));
	a = 0;
	while (c < d)
		str[a++] = s[c++];
	return (str);
}
