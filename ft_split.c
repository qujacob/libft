/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qujacob <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:26:54 by qujacob           #+#    #+#             */
/*   Updated: 2021/05/28 17:09:27 by qujacob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**free_strs(char **strs, size_t index)
{
	while (index > 0)
		free(strs[index--]);
	free(strs[index]);
	free(strs);
	return (NULL);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static size_t	count_size(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	size;
	size_t	index;

	if (!s)
		return (NULL);
	size = count_words(s, c);
	strs = (char **)malloc(sizeof(char *) * (size + 1));
	if (strs == NULL)
		return (NULL);
	strs[size] = NULL;
	index = 0;
	while (index < size)
	{
		while (*s == c && *s)
			s++;
		strs[index] = (char *)malloc(sizeof(char) * (count_size(s, c) + 1));
		if (strs[index] == NULL)
			return (free_strs(strs, index));
		ft_strlcpy(strs[index], s, count_size(s, c) + 1);
		s += count_size(s, c) + 1;
		index++;
	}
	return (strs);
}
