/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 10:37:23 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/23 07:06:17 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *str, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (str[0] == 0 || str == 0)
		return ((char *)src);
	while (src[i] && i < len)
	{
		if (src[i] == str[0])
		{
			j = 0;
			while (str[j] == src[i + j]
				&& i + j < len)
			{
				if (str[j + 1] == '\0')
					return ((char *)&src[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
