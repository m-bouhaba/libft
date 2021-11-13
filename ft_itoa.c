/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:44:11 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/13 00:50:40 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include    <stdio.h>

char	*ft_itoa(int n)
{
	char		*s;
    long int	nb;
    long int	nbr;
    int			i;
    int			j;

	nb = n;
	i = 0;
	j = 0;
	if (n == 0)
      return(ft_strdup("0"));
    if(nb < 0)
    {
        nb *= -1;
        i++;
        j++;
    }
    nbr = nb;
    while(nb > 0)
    {
        nb = nb / 10;
        i++;
    } 
    s = malloc(sizeof (char) * (i + 1));
    if(!s)
        return(NULL);
    if(j)
        s[0] = '-';
    s[i] = '\0';
    i--;
    while(nbr >= 0 && nbr)
    {
        s[i] = (nbr % 10) + 48;
        nbr = nbr / 10;
        i--;
    }
    return(s);
}

// int    main()
// {
//     printf("%s\n",ft_itoa());
// }