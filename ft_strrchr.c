/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:11:33 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/24 19:53:46 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int		i;

	ptr = NULL;
	i = ft_strlen(str);
	if (!c)
		return ((char*)str + i);
	while (*str)
	{
		if (*str == c)
			ptr = (char*)str;
		str++;
	}
	return (ptr);
}
