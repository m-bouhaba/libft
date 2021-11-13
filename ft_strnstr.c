/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:28:52 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/09 16:06:42 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char *hay;
	char *nee;
    size_t i;
	size_t j;

    hay = (char *)haystack;
    nee = (char *)needle;
	i = 0;
	j = 0;
	if (nee[j]== 0)
		return(&hay[i + j]);

	while(hay[i] && i < len)
	{
		j = 0;
		while(hay[i + j] && (hay[i + j] == nee[j]) && ((i + j) < len))
		{
			if(nee[j + 1] == '\0')
				return(&hay[i]);
			/*if (hay[i + j] == nee[i])
				return (&hay[i]);*/
			j++;
		}
		i++;
	}
	return(0);
}
/*int main()
{
	char hay[] = "maryam is cool";
	char nee[] = "i";
	
	printf("%s\n", ft_strnstr(hay, nee, 8));
	printf("%s\n", strnstr(hay, nee, 8));
}*/
