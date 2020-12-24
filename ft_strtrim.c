/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 18:03:27 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/25 03:39:45 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_left;
	int		len;
	int		i_right;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	i_left = 0;
	len = 0;

	result[len > 0 ? len + 1 : 0] = 0;
	return (result);
}
