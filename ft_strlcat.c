/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:09:22 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/18 16:07:46 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	char	*src1;

	src1 = (char *) src;
	i = 0;
	src_len = ft_strlen(src1);
	if ((size == 0 && !dst) || size == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (size < dst_len)
		return (src_len + size);
	while (src1[i] && (i + dst_len) < (size - 1))
	{
		dst[dst_len + i] = src1[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
