/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 06:29:21 by seplee            #+#    #+#             */
/*   Updated: 2020/11/29 07:59:47 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size - 1)
	{
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tab[j];
			}
			j++;
		}
		i++;
		while (i <= size)
		{
			printf("%d, ", tab[i]);
			i++;
		}
	}
}
int	main()
{
	int arr[8];

	arr[0] = 1;
	arr[1] = 0;
	arr[2] = 9;
	arr[3] = 2;
	arr[4] = 3;
	arr[5] = 8;
	arr[6] = 7;
	arr[7] = 6;
	ft_sort_int_tab(arr, 8);
}
