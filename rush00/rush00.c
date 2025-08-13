/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiho <tmiho@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:37:41 by tmiho             #+#    #+#             */
/*   Updated: 2025/08/10 23:39:09 by shayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

//04441 o---o
//56665 |   |
//56665 |   |
//24443 o---o

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
		ft_putchar('o');
	else if (index == 1)
		ft_putchar('o');
	else if (index == 2)
		ft_putchar('o');
	else if (index == 3)
		ft_putchar('o');
	else if (index == 4)
		ft_putchar('-');
	else if (index == 5)
		ft_putchar('|');
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
	int	cur_x;
	int	cur_y;

	if (x <= 0)
		putstr("x cannot be set lower than 1\n");
	if (y <= 0)
		putstr("y cannot be set lower than 1\n");
	cur_x = 0;
	cur_y = 0;
	while (cur_y < y)
	{
		while (cur_x < x)
		{
			write_char_from_index(get_position_index(cur_x, cur_y, x, y));
			cur_x++;
		}
		ft_putchar('\n');
		cur_y++;
		cur_x = 0;
	}
}
