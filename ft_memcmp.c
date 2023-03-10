/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qujacob <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 12:12:35 by qujacob           #+#    #+#             */
/*   Updated: 2021/05/28 13:46:33 by qujacob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*copy1;
	unsigned char	*copy2;
	size_t			i;

	if (n == 0)
		return (0);
	copy1 = (unsigned char *)s1;
	copy2 = (unsigned char *)s2;
	i = 0;
	while (i < n - 1)
	{
		if (copy1[i] != copy2[i])
			break ;
		i++;
	}
	return (copy1[i] - copy2[i]);
}
