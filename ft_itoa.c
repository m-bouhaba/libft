/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:44:11 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/18 17:35:22 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include    <stdio.h>

static char	*stock(long int nb, int i, int j, long int nbr)
{
	char	*x;

	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	x = malloc((i + 1) * sizeof(char));
	if (!x)
		return (NULL);
	if (j)
		x[0] = '-';
	x[i] = '\0';
	i--;
	while (i >= 0 && nbr)
	{
		x[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i--;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	int			j;
	int			i;
	long int	nb;
	long int	nbr;

	i = 0;
	j = 0;
	nbr = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		nbr *= (-1);
		j++;
		i++;
	}
	nb = nbr;
	return (stock(nb, i, j, nbr));
}

int    main()
{
	long int nb = 2135451843513651;
     printf("%s\n",ft_itoa(nb));
}