/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 02:26:54 by seplee            #+#    #+#             */
/*   Updated: 2020/12/10 02:59:23 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 'A' && av[1][i] <= 'Y') || (av[1][i] >= 'a' && av[1][i] <= 'y'))
					av[1][i] += 1;
			else if (av[1][i] == 'Z' || av[1][i] == 'z')
				av[1][i] -= 25;
			write(1, &av[1][i], 1);
			i++;   // Consider only'y','z' is special treatment!
		}
	}
	write(1, "\n", 1);
	return (0);
}



	
