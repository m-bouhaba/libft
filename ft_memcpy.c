/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:59:16 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/18 17:47:02 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*b;
	char	*a;
	size_t	i;

	b = (char *)dst;
	a = (char *)src;
	i = 0;
	if (a == NULL && b == NULL)
		returq(NULL);
	if (a == b)
		return (b);
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (b);
}
