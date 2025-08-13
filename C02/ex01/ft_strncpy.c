/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:07:43 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/12 18:43:57 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main(void)
{
	char src[] = "Hello";
	char dest[10];

	ft_strncpy(dest, src, 7);

	write(1, dest, 7);
	write(1, "\n", 1);

	return 0;
}*/