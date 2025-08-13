/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:20:48 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/13 09:20:59 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	*a;

	a = "banana";
	ft_str_is_alpha(a);
	printf("%d", ft_str_is_alpha(a));
}*/
