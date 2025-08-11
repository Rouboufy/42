/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:51:35 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/11 21:32:18 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int k;
    int temp;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            while (k < size)
            {
                /* code */
            }
            
        }
        
    }
    

}

int	main(void)
{
	int	*a;
	int	size;
	int	arr[7];

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	arr[5] = 6;
	arr[6] = 0;
	size = 6;
	a = arr;
	ft_sort_int_tab(a, size);
}
