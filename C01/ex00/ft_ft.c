/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 09:50:02 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/12 13:13:18 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int main(void)
{
	int value;

	ft_ft(&value);

	// Convert the int to two characters and write
	char c1 = (value / 10) + '0';
	char c2 = (value % 10) + '0';

	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, "\n", 1); // optional newline

	return 0;
}*/
