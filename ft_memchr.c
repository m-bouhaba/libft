/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:20:18 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/07 17:29:51 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
     size_t i;
    i = 0;
    char *str;
    str = (char *) s;
    if (c == 0)
        return (str + ft_strlen(str));
    while(str[i] && i < n)
    {
        if (str[i] == c)
            return(&str[i]);
        //else
            //return(0);
        i++;
    }
    return(0);
}