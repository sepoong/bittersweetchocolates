/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 22:36:53 by seplee            #+#    #+#             */
/*   Updated: 2020/12/09 00:19:35 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_check(char *str, char *orig, char *dest)
{
		if (*str == *orig)
			*str = *dest;
	return (*str);
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		while (argv[1])
		{
			ft_check(argv[1], argv[2], argv[3]);
			write(1, argv[1], 1);

			argv[1]++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
 
