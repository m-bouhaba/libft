/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:27:24 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/08 14:27:51 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (c == 0)
        return ((char *)s + ft_strlen(s));
    while(s[i])
    {
        if (s[i] == (char)c)
            return((char*)&s[i]);
        i++;
    }
    return(0);
}
/*int main()
{
    char s[] = "tripouille";
    printf("%s\n", ft_strchr(s, 0));
   // printf("%s\n", strchr(str, 0));
    return(0);
}*/