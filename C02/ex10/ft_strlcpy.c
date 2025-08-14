/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 08:14:56 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/14 09:18:44 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
		if (size != 0)
		{
			i = 0;
			while (src[i] != '\0' && i < size -1)
			{
				dest[i] = src[i];
				i++;
			}
			dest[i] = '\0';
		}
	}
	return (src_len);
}

// int	main(void)
// {
// 	char	src[] = "Hello";
// 	char	dest[10];

// 	ft_strlcpy(dest, src, 6);
// 	write(1, dest, 7);
// 	write(1, "\n", 1);
// 	return (0);
// }
