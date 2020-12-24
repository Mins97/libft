/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 20:51:43 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/24 10:41:01 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t result_i;
	size_t result_size;
	size_t src_i;

	result_size = ft_strlen(dest);
	result_i = 0;
	src_i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[result_i])
		result_i++;
	while (src[src_i] && (result_i + src_i < size - 1))
	{
		dest[result_i + src_i] = src[src_i];
		src_i++;
	}
	dest[result_i + src_i] = 0;
	return (result_size > size ?
			ft_strlen(src) + size : ft_strlen(src) + result_size);
}
