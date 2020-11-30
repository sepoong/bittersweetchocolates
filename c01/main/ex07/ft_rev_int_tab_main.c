/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 02:07:54 by seplee            #+#    #+#             */
/*   Updated: 2020/11/30 00:37:13 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;

	while (i < size / 2  )
	{
		{		
				temp = tab[i];
				tab[i] = tab[size - 1 - i];
				tab[size - 1 - i] = temp;
				i++;
		}
	}
	int j = 0;
	while (j < size)
	{
		printf("%d ", tab[j]);
		j++;
	}
}

int main()
{
	int number;

	int arr[4] = { 1, 2,  4, 5};
	ft_rev_int_tab(arr, 4);
	return 0;
}
