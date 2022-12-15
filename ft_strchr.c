/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qujacob <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 13:35:09 by qujacob           #+#    #+#             */
/*   Updated: 2021/05/28 11:45:33 by qujacob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*copy;

	copy = (char *)s;
	while (*copy)
	{
		if (*copy == (unsigned char)c)
			return (copy);
		copy++;
	}
	if (*copy == (unsigned char)c)
		return (copy);
	return (NULL);
}
