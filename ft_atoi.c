/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:12:53 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/17 02:15:59 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	char			*s;
	int				sign;
	unsigned long	result;

	s = (char *)str;
	sign = 1;
	result = 0;
	while (*s == 32 || (*s >= 7 && *s <= 13))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign *= (-1);
			s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = (result * 10) + (*s - 48);
		if (result > 9223372036854775807 && (sign == -1))
			return (0);
		else if (result > 9223372036854775807 && (sign == 1))
			return (-1);
		s++;
	}
	return (result * sign);
}
/*int main ()
{
    char a[] = "--1337";
    printf("%d\n", ft_atoi(a));
    printf("%d\n" , atoi(a));
    return(0);
}*/