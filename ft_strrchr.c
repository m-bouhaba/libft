/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:14:53 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/11 23:17:57 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char*	str;

	str = (char *) s;
	c = (char )c;
	i = (ft_strlen(str));
    if(c == 0)
        return(str + ft_strlen(str));
    while(i >= 0)
    {
        if(str[i] == c)
			return (&str[i]);
		i--;
    }
    return(0);
}