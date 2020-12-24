/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 13:51:26 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/24 19:59:34 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		src_i;
	int		result_i;
	char	*result;

	src_i = 0;
	result_i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(result = (char *)malloc(sizeof(char) *
					(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[src_i])
	{
		result[result_i++] = s1[src_i];
		src_i++;
	}
	src_i = 0;
	while (s2[src_i])
	{
		result[result_i] = s2[src_i];
		result_i++;
		src_i++;
	}
	result[result_i] = 0;
	return (result);
}
