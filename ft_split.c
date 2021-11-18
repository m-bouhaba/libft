/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:37:08 by mbouhaba          #+#    #+#             */
/*   Updated: 2021/11/18 16:07:16 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	count_word(char const *str, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
			counter++;
		while (str[i] != c && str[i])
			i++;
	}
	return (counter);
}

char	*put_word(char const *str, char c)
{
	int		i;
	int		n;
	int		j;
	char	*word;

	j = 0;
	n = 0;
	i = 0;
	if (!str)
		return (NULL);
	while (str[n] && str[n] == c)
		n++;
	while (str[n] && str[n] != c)
	{
		j++;
		n++;
	}
	word = malloc(sizeof(char) * (j + 1));
	while (str[i] == c && str[i])
		i++;
	n = 0;
	while (str[i] != c && str[i])
		word[n++] = str[i++];
	word[n] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		word;
	int		i;

	word = count_word(s, c);
	if (!s)
		return (NULL);
	new = malloc(sizeof(char *) * (word + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < word)
	{
		while (*s && *s == c)
		s++;
		new[i] = put_word(s, c);
		while (*s && *s != c)
			s++;
		i++;
	}
	new[i] = NULL;
	return (new);
}

/*int main()
{
    int i;
    i = 0;
    char str[] = "ggfggzhhhzmaa";
    char c = 'z';
    char **arr;
    arr = ft_split(str, c);
    while (arr[i])
    {
        printf("%s\n", arr[i]);
        i++;
    }
    return (0);
}*/