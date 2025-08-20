/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 09:29:43 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/20 14:47:07 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

// int	main(void)
// {
// 	int	n;
// 	int	m;

// 	n = 0x7fffffff;
// 	ft_putnbr(n);
// 	write(1, "\n", 1);
// 	m = -0x80000000;
// 	ft_putnbr(m);
// 	write(1, "\n", 1);
// 	return (0);
// }
