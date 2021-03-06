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

Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$


