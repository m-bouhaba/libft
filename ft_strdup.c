/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:25:17 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/09 16:52:58 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char *s;
    int i;
    char *p;

    s = (char *)s1;
    p = malloc(sizeof(char) * (ft_strlen(s) + 1));
    //p = malloc(sizeof(char *))s1;
    if (!p)
        return (NULL);
    i = 0;
    while (s[i])
    {
        p[i] = s1[i];
        i++;
    }
    p[i] = '\0';
    return (p);
}
/*int main()
{
    char str[] = "maryam";
    //printf("%s\n", ft_strdup(str));
    printf("%s\n", strdup(str));
}*/