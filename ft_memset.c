/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 20:17:17 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/24 09:49:27 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
		((unsigned char*)ptr)[i] = (unsigned char)c;
	return (ptr);
}
