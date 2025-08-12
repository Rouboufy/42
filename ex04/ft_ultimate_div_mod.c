/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:28:50 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/12 13:19:28 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}
/*void	print_number(int n)
{
	char c;

	if (n >= 10)
		print_number(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int main(void)
{
	int a = 17;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);

	// After function: a = quotient, b = remainder
	print_number(a);
	write(1, " ", 1);
	print_number(b);
	write(1, "\n", 1);

	return 0;
}*/