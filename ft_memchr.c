/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:20:18 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/08 15:40:55 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
     size_t i;
    i = 0;
    unsigned char *str;
    str = (unsigned char *) s;
    c =(unsigned char)c;

    while(i < n)
    {
        if (str[i] == c)
            return(&str[i]);
        i++;
    }
    return(NULL);
}