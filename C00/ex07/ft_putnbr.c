/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 10:50:04 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/09 12:23:02 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_convert(int argc, char *argv[])
{
	char arr[] = argv;
	int len = 0;

	//find arr lenght manually
	while (arr[len] != "\0")
	{
		len ++;
	}
	//store each characters individually 
	char parts[len]; //one char per slot 
	
	int i = 0;
	while(i < len)
	{
		parts[i] = arr[i];
		i++;
	}
	//reset the index to print 
	i = 0;

	while(i < len)
	{
		write(1, &parts[i], 1);
	}
}

int	main(int argc, char *argv[])
{
	ft_convert(argc, argv);
	return 0;
}


./a.out "abc" "def"
argc = 3
argv[0] = "./a.out"
argv[1] = "abc"
argv[2] = "def"

