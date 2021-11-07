/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:37:40 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/07 15:25:53 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return(c);
}
/*int main()
{
    int i;
    i = 'A';
    printf("%d\n", ft_tolower(i));
    printf("%d\n", tolower(i));
    return(0);
}*/