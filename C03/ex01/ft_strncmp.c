/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 21:22:23 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/17 16:24:37 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] && s1[i] == s2[i])
		i++;
	if ((unsigned char)s1[i] < (unsigned char)s2[i])
		return (-1);
	else if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     printf("My version: %d\n", ft_strncmp("123456", "123456", 4));
//     printf("Real strncmp: %d\n", strncmp("123456", "123456", 4));
//     printf("My version: %d\n", ft_strncmp("aaaaa", "aaaff", 4));
//     printf("Real strncmp: %d\n", strncmp("aaaaa", "aaaff", 4));
//     printf("My version: %d\n", ft_strncmp("abcd", "abc", 5));
//     printf("Real strncmp: %d\n", strncmp("abcd", "abc", 5));
// }
