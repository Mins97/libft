/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 14:28:02 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/24 19:25:07 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_write(size_t val)
{
	char t;

	t = val;
	write(1, &t, 1);
}

void	ft_putwchar(wchar_t c)
{
	if (c <= 0x7FF)
	{
		ft_write((c >> 6) + 0xC0);
		ft_write((c & 0x3F) + 0x80);
	}
	else if (c <= 0xFFFF)
	{
		ft_write((c >> 12) + 0xE0);
		ft_write(((c >> 6) & 0x3F) + 0x80);
		ft_write((c & 0x3F) + 0x80);
	}
	else if (c <= 0x10FFFF)
	{
		ft_write((c >> 18) + 0xF0);
		ft_write(((c >> 12) & 0x3F) + 0x80);
		ft_write(((c >> 6) & 0x3F) + 0x80);
		ft_write((c & 0x3F) + 0x80);
	}
}

void	ft_putchar(wchar_t c)
{
	if (c > 127)
		ft_putwchar(c);
	else
		write(1, &c, 1);
}
