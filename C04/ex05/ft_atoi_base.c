/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 08:42:37 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/20 14:41:51 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putnbr(long long n)
// {
// 	char		c;
// 	long long	nb;

// 	nb = n;
// 	if (nb < 0)
// 	{
// 		write(1, "-", 1);
// 		nb = -nb;
// 	}
// 	if (nb >= 10)
// 		ft_putnbr(nb / 10);
// 	c = (nb % 10) + '0';
// 	write(1, &c, 1);
// }

int	ft_index_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

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
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
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

int	ft_is_pos_or_neg(char *str)
{
	int	minus_count;
	int	sign;

	minus_count = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	if (minus_count % 2 == 0)
		sign = 1;
	else
		sign = -1;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	base_len;
	int	index;

	if (!is_valid_base(base))
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	sign = ft_is_pos_or_neg(str);
	while (*str == '+' || *str == '-')
		str++;
	result = 0;
	base_len = ft_strlen(base);
	while (*str)
	{
		index = ft_index_in_base(*str, base);
		if (index == -1)
			break ;
		result = result * base_len + index;
		str++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	char	*nbr;

// 	char base2[3] = "01"; // Binary
// 	// char base8[9] = "poneyvif";           // octale
// 	// char base16[17] = "0123456789ABCDEF"; // Hexadecimal
// 	nbr = "01010111111111111";
// 	ft_putnbr(ft_atoi_base(nbr, base2));
// 	return (0);
// }
