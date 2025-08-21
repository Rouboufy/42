/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:31:15 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/21 18:20:22 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(5));
// }
