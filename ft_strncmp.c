/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:46:01 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/11 22:05:57 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t	i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return(0);
	while(str1[i] && str2[i] && i < (n - 1) && str1[i] == str2[i])
    {
        i++;
    }
    return(str1[i] - str2[i]);    
}
/*int main()
{
    char str[] = "aab";
    char str1[] = "‡aaa";
    printf("%d\n", ft_strncmp(str, str1, 2));
    printf("%d\n", strncmp(str,str1,3));
    return (0);
}*/