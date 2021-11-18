/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:16:13 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/18 16:10:51 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	while ((i < len) && s[i])
	i++;
	new = malloc((i + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (j < i)
	{
		new[j] = s[start];
		j++;
		start++;
	}
	new[j] = '\0';
	return (new);
}
