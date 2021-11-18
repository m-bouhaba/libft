/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:01:17 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/14 04:26:41 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int nbr)
{
	int	j;

	j = 1;
	while (nbr > 9)
	{
		j = j * 10;
		nbr = nbr / 10;
	}
	return (j);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		i = count(n);
		while (i > 9)
		{
			ft_putchar_fd (n / i + '0', fd);
			n = n - ((n / i) * i);
			i = i / 10;
		}
		ft_putchar_fd(n + '0', fd);
	}
}
