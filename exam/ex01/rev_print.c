/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:50:42 by seplee            #+#    #+#             */
/*   Updated: 2020/12/10 02:00:58 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n]) //it fails with *str 
		n++;
	return (n - 1); //'strlen' counts before'\0'
}


int main(int ac, char **av)
{
	int n;
	
	n = ft_strlen(av[1]);
	if (ac == 2)
	{
		while (n >= 0)
		{
			write(1, &av[1][n], 1);
			n--; //I used'swap' at first, but I don't have to. Not changing at the same time.
		}	
	}
	write(1, "\n", 1);
}
			


