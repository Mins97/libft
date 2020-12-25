/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 14:28:50 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/25 12:58:56 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *list_last;

	if (!(*lst))
		*lst = new;
	else
	{
		list_last = *lst;
		while (list_last->next)
			list_last = list_last->next;
		list_last->next = new;
	}
}
