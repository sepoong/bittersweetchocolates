/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 01:31:45 by seplee            #+#    #+#             */
/*   Updated: 2020/12/09 01:45:39 by seplee           ###   ########.fr       */
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
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] -= 32;
			else	if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1,"\n", 1);
	return (0);
}
