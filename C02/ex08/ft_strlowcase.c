/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:05:04 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/13 14:06:21 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_convert(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return c + 32;
	}
	return c;
}

char	*ft_strlowcase(char *str)
{
	char	*p;

	p = str;
	while (*p)
	{
		*p = ft_convert(*p);
		p++;
	}
	return (str);
}

int	main(void)
{

	char a[] = "BANANA";
	ft_strlowcase(a);
	printf("%s", ft_strlowcase(a));
}
