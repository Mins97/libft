/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 20:17:08 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/24 09:05:03 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t	i;

	i = -1;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (++i < num)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
