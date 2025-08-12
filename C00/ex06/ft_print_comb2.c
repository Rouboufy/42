/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 20:30:08 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/09 10:00:34 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert(int n, int m)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = (n / 10) + '0';
	c2 = (n % 10) + '0';
	c3 = (m / 10) + '0';
	c4 = (m % 10) + '0';
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	y;
	char	x;

	y = 0;
	while (y <= 99)
	{
		x = y + 1;
		while (x <= 99)
		{
			if (y != x && y < x)
			{
				ft_convert(y, x);
			}
			x++;
		}
		y++;
	}
}
