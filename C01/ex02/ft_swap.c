/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 12:13:59 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/12 13:17:40 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = *b;
	*b = temp_a;
}
/*int main(void)
{
	int x = 5;
	int y = 9;

	ft_swap(&x, &y);

	// Print swapped values
	char c1 = x + '0';
	char c2 = y + '0';

	write(1, &c1, 1);
	write(1, " ", 1);
	write(1, &c2, 1);
	write(1, "\n", 1);

	return 0;
}*/