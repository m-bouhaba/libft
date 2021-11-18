/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:32:05 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/18 03:46:35 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
		return (d);
	}
	return (ft_memcpy(d, s, len));
}
/*int main()
{
    char src[] = "start";
    char dst[] = "start";
    char src1[] = "start";
    char dst1[] = "start";
    printf("%s\n", ft_memmove(dst1, src1 + 2, 3));
    printf("%s\n", memmove(dst, src + 2, 3));
    return (0);

 }*/