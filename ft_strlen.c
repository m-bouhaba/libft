/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:30:41 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/17 03:30:25 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	char	*l;
	size_t	i;

	l = (char *)s;
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*int main()
{
    char* s = "maryam";
    printf("%zu\n" , ft_strlen(s));
    printf("%lu\n" , strlen(s));
    return (0);
}*/