/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:33:22 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/09 16:32:50 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_calloc(size_t count, size_t size)
 {
    char *H;
    size_t i;

    i = count * size;
    H = malloc(i);
    if (H == 0)
        return(NULL);      
    ft_bzero(H, i);
    return(H);
 }

 /*int main()
 {
     printf("%s",ft_calloc(4,3));
     return(0);
 }*/