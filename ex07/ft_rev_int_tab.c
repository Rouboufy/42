/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanglai <blanglai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:56:27 by blanglai          #+#    #+#             */
/*   Updated: 2025/08/11 17:46:06 by blanglai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int rever_tab[size];
	count = 0;

	while(size > count )
	{
		printf("%d\n", tab[size - 1 - count]);
		rever_tab[count]= tab[size - 1 - count];
		count ++;
	}
}

int main()
{
	int arr[] ={1 ,2 , 3, 4, 5, 6};
	int *a = arr;
	int size = 6;
	ft_rev_int_tab(a, size);
}
