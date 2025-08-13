/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:33:29 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/13 12:16:22 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_convert(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
}

char	*ft_strupcase(char *str)
{
	char	*p;

	*p = str;
	while (*p)
	{
		*p = ft_convert(*p);
		p++;
	}
	return (str);
}

int	main(void)
{
	char	*a;

	a = "bAnana";
	ft_strupcase(a);
	printf("%s", ft_strupcase(a));
}
