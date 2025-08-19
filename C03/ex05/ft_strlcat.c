/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:25:13 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/17 13:03:14 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len < size)
	{
		dest[dest_len + i] = '\0';
	}
	return (dest_len + ft_strlen(src));
}
// int main(void)
// {
	// char dest[50] = "Bonjour ";
	// char src[] = "Ben";
//
	// printf("Avant: %s\n", dest);
	// ft_strlcat(dest, src, 15);
	// printf("Après: %s\n", dest);
//
	// return 0;
// }
