/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qujacob <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:13:10 by qujacob           #+#    #+#             */
/*   Updated: 2021/05/28 11:45:44 by qujacob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*copy;

	copy = (char *)s;
	i = 0;
	while (copy[i])
		i++;
	while (i > 0)
	{
		if (copy[i] == (unsigned char)c)
			return (&copy[i]);
		i--;
	}
	if (copy[i] == (unsigned char)c)
		return (copy);
	return (NULL);
}
