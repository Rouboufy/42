/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 09:41:22 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/14 13:17:12 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_convert(unsigned char c)
{
	char *hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (*p)
	{
		if (*p >= 32 && *p <= 126)
		{
			ft_putchar(*p);
		}
		else
		{
			ft_convert(*p);
		}
		p++;

	}
}

int	main(void)
{
	char a[] = "bonjo\rur je suis \nravie &de\a vOUS (rEncontrer)";
	ft_putstr_non_printable(a);
}
