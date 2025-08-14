/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:22:34 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/14 08:09:28 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (!((*str >= 33 && *str <= 126)))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*a;

// 	a = "bAnana";
// 	ft_str_is_printable(a);
// 	printf("%d", ft_str_is_printable(a));
// }
