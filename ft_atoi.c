/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:12:49 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/24 19:16:56 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *src)
{
	int			i;
	int			sign;
	long long	n;

	n = 0;
	sign = 1;
	i = 0;
	while (src[i] && (src[i] == ' ' || src[i] == '\n' || src[i] == '\t'
		|| src[i] == '\v' || src[i] == '\f' || src[i] == '\r'))
		i++;
	if (src[i] == '-')
		sign *= -1;
	if (src[i] && (src[i] == '+' || src[i] == '-'))
		i++;
	while (src[i] && src[i] >= '0' && src[i] <= '9')
	{
		if (n * sign > 2147483647)
			return (-1);
		else if (n * sign < -2147483648)
			return (0);
		else
			n = n * 10 + (src[i] - 48);
		i++;
	}
	return (n * sign);
}
