/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:51:35 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/12 13:36:43 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *arr, int size)
{
	int	i;
	int	j;
	int	min_idx;
	int	temp;

	i = 0;
	while (i < size)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
			j++;
		}
		temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;
		i++;
	}
}
/*int	main(void)
{
	int	*a;
	int	size;
	int	arr[7];
    int n;

	arr[0] = 8;
	arr[1] = 5;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 9;
	arr[5] = 7;
	arr[6] = 0;
	size = 7;
	a = arr;
    n = 0;
	ft_sort_int_tab(a, size);
    while (n < 7)
    {
        printf("%d", a[n]);
        n++;
    }
    return 0;
}*/
