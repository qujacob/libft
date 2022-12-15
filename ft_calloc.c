/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qujacob <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:13:56 by qujacob           #+#    #+#             */
/*   Updated: 2021/05/24 15:18:15 by qujacob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	id_t			i;
	unsigned char	*memory;

	memory = (unsigned char *)malloc(size * count);
	if (memory == NULL)
		return (NULL);
	i = 0;
	while (i < size * count)
		memory[i++] = 0;
	return ((void *)memory);
}
