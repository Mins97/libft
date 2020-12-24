/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:53:46 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/24 10:43:09 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t i;

	if (size <= 0)
		return (0);
	i = 0;
	while ((str1[i] != 0 || str2[i] != 0)
		&& str1[i] == str2[i] && i < size - 1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
