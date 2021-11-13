/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:42:26 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/08 21:18:04 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int   ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    i = 0;
    
     unsigned char *str1;
    unsigned char *str2;
    
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    
    if (n == 0)
        return(0);
   while (i < (n - 1) && str1[i] == str2[i])
    {
        i++;
    }
    return(str1[i] - str2[i]);
}
/*int main()
{
    char s1[] = "maryam";
    char s2[] = "mbryam";
    printf("%d\n", ft_memcmp(s1, s2, 3));
}*/