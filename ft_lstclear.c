/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 14:28:50 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/24 20:13:57 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list_temp;

	if (!(*lst) || !lst)
		return ;
	list_temp = *lst;
	while (*lst)
	{
		*lst = list_temp->next;
		del(list_temp->content);
		free(list_temp);
		list_temp = *lst;
	}
}
