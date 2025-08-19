/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiho <tmiho@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:37:26 by tmiho             #+#    #+#             */
/*   Updated: 2025/08/10 23:37:49 by shayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_putchar(char c);
void	putstr(char *str);
int		get_strlen(char *str);

int	get_num(char *num_str)
{
	int	len;
	int	i;
	int	res;

	len = get_strlen(num_str);
	if (len == 0)
		return (-1);
	i = 0;
	res = 0;
	while (i < len)
	{
		if (num_str[i] < '0' || num_str[i] > '9')
			return (-1);
		if (res > 0x7fffffff / 10)
			return (-1);
		if (res == 0x7fffffff / 10 && num_str[i] - '0' >= 8)
			return (-1);
		res = res * 10 + (num_str[i] - '0');
		i++;
	}
	return (res);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc == 3)
	{
		x = get_num(argv[1]);
		y = get_num(argv[2]);
		if (x == -1 || y == -1)
		{
			putstr("The value of the command-line arguments is invalid.\n");
			return (0);
		}
		rush(x, y);
	}
	else
	{
		putstr("The number of command-line arguments is invalid.\n");
	}
	return (0);
}
