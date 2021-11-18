/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:33:22 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/18 16:11:46 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;
	size_t	i;

	i = count * size;
	new = malloc(i);
	if (new == 0)
		return (NULL);
	ft_bzero (new, i);
	return (new);
}
/*int main()
 {
     printf("%s",ft_calloc(4,3));
     return(0);
 }*/