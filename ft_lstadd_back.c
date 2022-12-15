/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qujacob <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 23:52:30 by qujacob           #+#    #+#             */
/*   Updated: 2021/05/24 15:18:42 by qujacob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*copy;

	if (*alst == NULL)
		*alst = new;
	else
	{
		copy = ft_lstlast(*alst);
		copy->next = new;
	}
}
