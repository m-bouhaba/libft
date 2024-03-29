/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:31:01 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/18 16:12:05 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, 0, n);
}

/*int main()
{
    char src[] = "issam";
    char dst[] = "issam";

    bzero(src, 3);
    printf("dyalhom = %s\n",src);
    ft_bzero(dst, 3);
    printf("ana = %s\n",dst);
}*/
