/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 09:41:22 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/14 14:28:44 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert(unsigned char c)
{
	char	hex[16];

	hex[0] = '0';
	hex[1] = '1';
	hex[2] = '2';
	hex[3] = '3';
	hex[4] = '4';
	hex[5] = '5';
	hex[6] = '6';
	hex[7] = '7';
	hex[8] = '8';
	hex[9] = '9';
	hex[10] = 'a';
	hex[11] = 'b';
	hex[12] = 'c';
	hex[13] = 'd';
	hex[14] = 'e';
	hex[15] = 'f';
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

// int	main(void)
// {
// 	chara[] = "bonjo\rur je suis \nravie &de\a vOUS (rEncontrer)";
// 	ft_putstr_non_printable(a);
// }
