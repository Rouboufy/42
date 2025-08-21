/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:37:47 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/21 16:50:58 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*name;

	if (argc != 1)
	{
		return (0);
	}
	name = argv[0];
	while (*name)
	{
		write(1, name, 1);
		name++;
	}
	write(1, "\n", 1);
}
