/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 14:28:50 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/25 13:30:40 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list_new;

	if (!(list_new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
		list_new->content = NULL;
	else
	{
		if (!(list_new->content = 
			malloc(sizeof(*(list_new->content)) * sizeof(content))))
			return (NULL);
		list_new->content = ft_memcpy(list_new->content, content, sizeof(content));
	}
	list_new->next = NULL;
	return (list_new);
}
