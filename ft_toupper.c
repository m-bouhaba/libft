/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:37:54 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/07 15:27:22 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return(c);
}
/*nt main()
{
    int i;
    i = 'a';
    printf("%d\n", ft_toupper(i));
    printf("%d\n", toupper(i));
    return(0);
}*/