/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:20:40 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/07 13:22:31 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*int main()
{
	int c;
	c = 'a';
	printf("%d\n" , ft_isdigit(c));
	printf("%d\n" , isdigit(c));
	return (0);
}*/
