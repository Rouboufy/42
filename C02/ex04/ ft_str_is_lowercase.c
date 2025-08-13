/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_str_is_lowercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:14:34 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/13 10:18:27 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char	*a;

	a = "bAnana";
	ft_str_is_alpha(a);
	printf("%d", ft_str_is_alpha(a));
}
