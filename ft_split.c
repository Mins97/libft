/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 21:41:46 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/25 04:55:52 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*freee(char **result, int result_i)
{
	int		i;

	i = 0;
	while (i < result_i)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static void	put_in(char **result, char const *src, char c)
{
	int		src_i;
	int		result_i;
	int		word_i;

	src_i = 0;
	result_i = 0;
	word_i = 0;
	while (src[src_i])
	{
		if (src[src_i] != c)
		{
			result[result_i][word_i] = src[src_i];
			word_i++;
			if (src[src_i + 1] == c || src[src_i + 1] == 0)
			{
				result[result_i][word_i] = 0;
				result_i++;
				word_i = 0;
			}
		}
		src_i++;
	}
}

static void	*mem_alloc(char **result, char const *src, char c)
{
	int		src_i;
	int		result_i;
	int		word_i;

	src_i = -1;
	result_i = 0;
	word_i = 0;
	while (src[++src_i])
		if (src[src_i] != c)
		{
			word_i++;
			if (src[src_i + 1] == c || src[src_i + 1] == 0)
			{
				if (!(result[result_i] = (char *)malloc(sizeof(char)
												* (word_i + 1))))
					return (freee(result, result_i));
				result_i++;
				word_i = 0;
			}
		}
	result[result_i] = 0;
	put_in(result, src, c);
	return ((void *)1);
}

char		**ft_split(char const *src, char c)
{
	int		i;
	int		words;
	char	**result;

	if (!src)
		return (NULL);
	i = -1;
	words = 1;
	while (src[++i])
		if (src[i] != c && (src[i + 1] == c || src[i + 1] == 0))
			words++;
	if (!(result = (char **)malloc(sizeof(char *) * (words))))
		return (freee(result, 0));
	if (!(mem_alloc(result, src, c)))
		return (freee(result, 0));
	return (result);
}
