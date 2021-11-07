/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:27:24 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/07 16:56:30 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    char *str;
    str = (char *) s;
    if (c == 0)
        return (str + ft_strlen(str));
    while(str[i])
    {
        if (str[i] == c)
            return(&str[i]);
        //else
            //return(0);
        i++;
    }
    return(0);
}
/*int main()
{
    char str[] = {"maryam student"};
    printf("%s\n", ft_strchr(str, 0));
    printf("%s\n", strchr(str, 0));
    return(0);
}*/