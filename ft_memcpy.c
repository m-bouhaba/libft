/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:59:16 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/07 17:06:19 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *b = (char *)dst;
    char *a = (char *)src;
    size_t i;
    i = 0;
    
    if (a == NULL && b == NULL)
        return(b);
    while(i < n)
    {
        b[i] = a[i];
        i++;
    }
   // b[i] = '\0';
    return (b);
}
/*int main()
{
    char src[] = "word";
    char dst[] = "maryam";
    char src1[] = "world";
    char dst1[] = "maryam";
    printf("%s\n", ft_memcpy(src1, dst1, 2));
    printf("%s\n", memcpy(src, dst, 2));
    return (0);

}*/