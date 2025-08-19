/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 14:52:41 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/14 20:03:31 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *c1, char *c2)
{
	int	diff;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	diff = ((unsigned char ) *s1 - (unsigned char ) *s2);
	if (diff < 0)
	{
		return (-1);
	}
	if (diff > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
	printf("%d\n", ft_strcmp("abdecf", "abdec"));

	printf("the answer is %d", strcmp("abdecf", "abdec"));
}
