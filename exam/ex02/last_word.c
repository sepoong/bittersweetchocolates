/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:55:01 by seplee            #+#    #+#             */
/*   Updated: 2020/12/10 18:42:20 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
	
#include <unistd.h>

int ft_space(char c)
{  // 문자열 출력이 아니다 char *str XXX
if (c == ' ' || c == '\t')
	return (1);
return (0);
}

int main(int ac, char **av)
{
int i;

i = 0;
if (ac == 2)
{   // 전체 while 문 없다.  while 4개, 
while (av[1][i])
	i++;
i--;
while (ft_space(av[1][i]))
	i--;
while (av[1][i] && !ft_space(av[1][i]))
	i--;
i++;
while (av[1][i] && !ft_space(av[1][i]))
{
	write(1, &av[1][i], 1);
	i++;
}
}
write(1, "\n", 1);
return (0);
}	



#include <unistd.h>

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
			av[1]++;
		av[1]--; // i -- 아니다
		while (ft_isblank(*av[1]))
			av[1]--;
		while (*av[1] && !ft_isblank(*av[1]))
			av[1]--;
		av[1]++;
		while (*av[1] && !ft_isblank(*av[1]))
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
