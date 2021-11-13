/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:39:25 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/10 22:16:05 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str1;
	char *str2;
	char *new;
	int i;
	int j;
	int k;
	
	
	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	j = 0;
	k = 0;
	if (!s1 || !s2)
		return(0);
	new = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!new)
		return(NULL);
	while(str1[i])
	{
		new[j] = str1[i];
		i++;
		j++;
	}
	while(str2[k])
	{
		new[j] = str2[k];
		k++;
		j++;
	}
	new[j] = '\0';
	return(new);
}

/*int main()
{
	char *s = "42";
	char   
	s = ft_strjoin("42", "");
}*/