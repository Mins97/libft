/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 08:28:51 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/24 10:30:02 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int value)
{
	size_t i;

	i = ft_strlen(str);
	if (!str[i] && !value)
		return ((char *)(str + i));
	i = -1;
	while (str[++i])
		if (str[i] == (char)value)
			return ((char *)(str + i));
	return (NULL);
}
