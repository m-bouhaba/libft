/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:33:50 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/07 20:08:57 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t len;
    size_t i;
    char *src1;

    src1 = (char *) src;
    i = 0;
    len = ft_strlen(src1);
    if (size == 0)
        return(len);
    while(src1[i] && (i < size - 1))
    {
        dst[i] = src1[i];
        i++;
    }
    dst[i] = ('\0');
    return (len);
}