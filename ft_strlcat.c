/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 20:51:43 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/25 05:23:38 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t dst_size;
	size_t src_i;

	dst_size = 0;
	src_i = -1;
	while (dest[dst_size] && dst_size < size)
		dst_size++;
	while (src[++src_i] && (dst_size + src_i + 1) < size)
		dest[dst_size + src_i] = src[src_i];
	if (dst_size < size)
		dest[dst_size + src_i] = '\0';
	return (dst_size + ft_strlen(src));
}
