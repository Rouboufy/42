/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 08:17:18 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/19 17:42:16 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	is_valid_base(char *base)
{
	int	seen[256];
	int	i;

	i = 0;
	while (i < 256)
		seen[i++] = 0;
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (seen[(unsigned char)base[i]])
			return (0);
		seen[(unsigned char)base[i]] = 1;
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long long	n;

	if (!is_valid_base(base))
		return ;
	len = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= len)
		ft_putnbr_base(n / len, base);
	write(1, &base[n % len], 1);
}

// int	main(void)
// {
// 	int	nbr;

// 	char base2[3] = "01";                 // Binary
// 	char base8[9] = "poneyvif";           // octale
// 	char base16[17] = "0123456789ABCDEF"; // Hexadecimal
// 	nbr = 42;
// 	ft_putnbr_base(nbr, base2);
// 	write(1, "\n", 1);
// 	ft_putnbr_base(nbr, base8);
// 	write(1, "\n", 1);
// 	ft_putnbr_base(nbr, base16);
// 	write(1, "\n", 1);
// 	return (0);
// }
