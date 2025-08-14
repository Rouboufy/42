/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:33:29 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/14 08:09:59 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	ft_convert(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

char	*ft_strupcase(char *str)
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

// int	main(void)
// {
// 	char	a[] = "banana";
// 	ft_strupcase(a);
// 	printf("%s", ft_strupcase(a));
// }
