/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:45:22 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/21 18:24:19 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	is_prime;

	if (nb < 2)
		nb = 2;
	while (1)
	{
		is_prime = 1;
		if (nb == 2 || nb == 3)
			return (nb);
		if (nb % 2 == 0 || nb % 3 == 0)
			is_prime = 0;
		i = 5;
		while (is_prime && (long long)i * i <= nb)
		{
			if (nb % i == 0 || nb % (i + 2) == 0)
				is_prime = 0;
			i += 6;
		}
		if (is_prime)
			return (nb);
		nb++;
	}
}

// int	main(void)
// {
// 	printf("%d", ft_find_next_prime(0x7fffffff));
// }
