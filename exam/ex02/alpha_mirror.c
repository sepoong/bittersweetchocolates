/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:23:04 by seplee            #+#    #+#             */
/*   Updated: 2020/12/10 20:15:14 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{   //' z' -(c -'a')만 잘 기억하ㄴ면 됨:wq
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = 'Z' - (argv[1][i] - 'A');
			else if	(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = 'z' - (argv[1][i] - 'a');
			write(1, &argv[1][i], 1);
			i++;
		}
	}
		write(1, "\n", 1);
		return (0);
}

