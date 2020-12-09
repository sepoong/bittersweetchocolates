/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 02:51:31 by seplee            #+#    #+#             */
/*   Updated: 2020/12/10 00:27:48 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n')
				i++;
		while (!(av[1][i] == 9 || av[1][i] == 32 || av[1][i] == '\n'))
		{
		write(1, &av[1][i], 1);
		i++;
		}
	//	while (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n')
	//			i++;
	} // Order matters in this matter. Using'while' in parallel. In this order, the character after'space' is not displayed.
	write(1, "\n", 1);
	return (0);
}
