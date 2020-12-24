/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 18:03:27 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/25 03:50:46 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	beg = 0;
	while (s1[beg] && ft_strchr(set, s1[beg]))
		beg++;
	end = ft_strlen(s1 + beg);
	if (end)
		while (s1[end + beg - 1] != 0 && ft_strchr(set, s1[end + beg - 1]) != 0)
			end--;
	if (!(new = malloc(sizeof(char) * end + 1)))
		return (NULL);
	ft_strncpy(new, s1 + beg, end);
	new[end] = '\0';
	return (new);
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int		i_left;
// 	int		len;
// 	int		i_right;
// 	char	*result;

// 	if (!s1 || !set)
// 		return (NULL);
// 	i_left = 0;
// 	len = 0;
// 	while (s1[i_left] && ft_strchr(set, s1[i_left]))
// 		i_left++;
// 	while (s1[i_left + len])
// 		len++;
// 	len--;
// 	while (s1[i_left + len] && ft_strchr(set, s1[i_left + len]))
// 		len--;
// 	if (!(result = len > 0 ? (char *)malloc(sizeof(char) * (len + 2)) :
// 							(char *)malloc(sizeof(char))))
// 		return (NULL);
// 	i_right = i_left - 1;
// 	while (s1[++i_right])
// 		if (i_right >= i_left && i_right <= (len + i_left))
// 			result[i_right - i_left] = s1[i_right];
// 	result[len > 0 ? len + 1 : 0] = 0;
// 	return (result);
// }
