/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 22:36:53 by seplee            #+#    #+#             */
/*   Updated: 2020/12/09 01:22:13 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 //char	ft_check(char *str, char *orig, char *dest)
 //{
 //
 //	if (*str == *orig)
 //			*str = *dest;
 //	return (*str);
 //}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write(1, "\n", 1);
	}
	return (0);
	if (argc == 4)
	{
		while (argv[1][i])
		{
		//	ft_check(&argv[1][i], &argv[2][0], &argv[3][0]);
			if (argv[1][i] == argv [2][0])
				argv[1][i] = argv [3][0];
			write(1, &argv[1][i], 1);
            i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
 
