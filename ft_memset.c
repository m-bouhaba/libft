/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:30:28 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/18 03:48:54 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	c = (unsigned char)c;
	s = (unsigned char *)b;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
/*int main()
{
    char a[] = "ahmmad";
    printf("%s\n", ft_memset(a, 'h', 4));
    printf("%s\n", memset(a, 'h', 4));
}*/