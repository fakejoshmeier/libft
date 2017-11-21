/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeier <jmeier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 12:52:12 by jmeier            #+#    #+#             */
/*   Updated: 2017/11/21 08:31:58 by jmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd, int base)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n == -2147483648)
	{
		ft_putchar_fd('2', fd);
		n %= 1000000000;
		n = -n;
	}
	if (n >= base)
	{
		ft_putnbr_fd(n / base, fd, base);
		ft_putnbr_fd(n % base, fd, base);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

int		main(void)
{
	int i = 100;

	ft_putnbr_fd(i, 1, 10);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(i, 1, 2);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(i, 1, 8);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(i, 1, 16);
	ft_putchar_fd('\n', 1);
	return (0);
}
