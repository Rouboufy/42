/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:07:45 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/13 15:37:18 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_convert_up(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - 32;
	}
	return c;
}

char	ft_convert_low(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return c + 32;
	}
	return c;
}

char	*ft_strcapitalize(char *str)
{
	char	*p;
	int		new_word;

	p = str;
	new_word = 1;
	while (*p)
	{
		if (!((*p >= '0' && *p <= '9')
				|| (*p >= 'A' && *p <= 'Z')
				|| (*p >= 'a' && *p <= 'z')))
		{
			new_word = 1;
		}
		else
		{
			if (new_word)
				*p = ft_convert_up(*p);
			else
				*p = ft_convert_low(*p);
			new_word = 0;
		}
		p++;
	}
	return (str);
}

int	main(void)
{
	char a[] = "bonjour je suis 78ravie &de vOUS (rEncontrer)";
	ft_strcapitalize(a);
	printf("%s", ft_strcapitalize(a));
}
