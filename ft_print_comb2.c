/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 19:15:39 by seplee            #+#    #+#             */
/*   Updated: 2020/11/29 02:57:50 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
  write(1, &a, 1);
  write(1, &b, 1);
}

void	ft_putchar2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
}

void	ft_putchar3()
{
	write(1, ", ", 2);
}


void	ft_print_comb2(void)
{
	int j, i, m, n;

	m = '0';
	while (m < '9')
	{
		n = '0';
		while (n <= '9')
		{	
			i = '0';
			while (i <= '9' )
			{
				j = '0';
				while (j <= '9')
				{
		 		ft_putchar(i, j);
				j++;
				}
	 			i++;	
			}
		}
		n++;
		}
		m++;
	}



int   main(void)
{
  ft_print_comb2();
}
