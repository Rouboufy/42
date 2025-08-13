/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:09:07 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/13 09:13:36 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (!((*str >= '0' && *str <= '9')))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	*a;

	a = "qsdgh";
	ft_str_is_numeric(a);
	printf("%d", ft_str_is_numeric(a));
}*/
