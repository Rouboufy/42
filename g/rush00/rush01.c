/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiho <tmiho@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:37:51 by tmiho             #+#    #+#             */
/*   Updated: 2025/08/10 23:39:24 by shayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	get_position_index(int cur_x, int cur_y, int size_x, int size_y)
{
	if (cur_y == 0)
	{
		if (cur_x == 0)
			return (0);
		else if (cur_x == (size_x - 1))
			return (1);
		else
			return (4);
	}
	if (cur_y == (size_y - 1))
	{
		if (cur_x == 0)
			return (2);
		else if (cur_x == (size_x - 1))
			return (3);
		else
			return (4);
	}
	if (cur_x == 0 || cur_x == (size_x - 1))
		return (5);
	return (6);
}

void	write_char_from_index(int index)
{
	if (index == 0)
		ft_putchar('/');
	else if (index == 1)
		ft_putchar('\\');
	else if (index == 2)
		ft_putchar('\\');
	else if (index == 3)
		ft_putchar('/');
	else if (index == 4)
		ft_putchar('*');
	else if (index == 5)
		ft_putchar('*');
	else if (index == 6)
		ft_putchar(' ');
}

int	get_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count ++;
	}
	return (count);
}

void	putstr(char *str)
{
	int	len;
	int	count;

	len = get_strlen(str);
	count = 0;
	while (count < len)
	{
		ft_putchar(str[count]);
		count++;
	}
}

void	rush(int x, int y)
{
	int	x_count;
	int	y_count;

	if (x <= 0)
		putstr("x cannot be set lower than 1\n");
	if (y <= 0)
		putstr("y cannot be set lower than 1\n");
	x_count = 0;
	y_count = 0;
	while (y_count < y)
	{
		while (x_count < x)
		{
			write_char_from_index(get_position_index(x_count, y_count, x, y));
			x_count++;
		}
		ft_putchar('\n');
		y_count++;
		x_count = 0;
	}
}
