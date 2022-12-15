/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qujacob <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 11:47:46 by qujacob           #+#    #+#             */
/*   Updated: 2021/05/28 11:38:04 by qujacob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*copy;
	unsigned char	*copy2;

	copy = (unsigned char *)dst;
	copy2 = (unsigned char *)src;
	if (copy > copy2)
		while (len-- > 0)
			copy[len] = copy2[len];
	else if (copy < copy2)
		ft_memcpy(copy, copy2, len);
	return (dst);
}
