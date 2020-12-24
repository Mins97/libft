/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 18:03:27 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/25 03:53:50 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int
	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
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
