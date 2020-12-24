/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:44:27 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/24 08:49:58 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	put_in(unsigned int n, char *dest, int i, int digit)
{
	while (digit > 1)
	{
		n /= 10;
		digit--;
	}
	dest[i] = (n % 10) + 48;
}

static	char	*mem_alloc(unsigned int str_ascii, int sign, int digit)
{
	char	*dest;
	int		i;

	i = 0;
	if (sign == 1)
		if (!(dest = (char *)malloc(sizeof(char) * (digit + 1))))
			return (NULL);
	if (sign == -1)
		if (!(dest = (char *)malloc(sizeof(char) * (digit + 2))))
			return (NULL);
	if (sign == -1)
	{
		dest[i] = '-';
		i++;
	}
	while (digit > 0)
	{
		put_in(str_ascii, dest, i, digit);
		i++;
		digit--;
	}
	dest[i] = 0;
	return (dest);
}

char			*ft_itoa(int n)
{
	unsigned int	str_ascii;
	unsigned int	str_cpy;
	int				sign;
	int				digit;

	if (n < 0)
	{
		str_ascii = -n;
		sign = -1;
	}
	else
	{
		str_ascii = n;
		sign = 1;
	}
	str_cpy = str_ascii;
	digit = 1;
	while (str_cpy >= 10)
	{
		str_cpy /= 10;
		digit++;
	}
	return (mem_alloc(str_ascii, sign, digit));
}
