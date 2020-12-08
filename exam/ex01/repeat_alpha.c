/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:59:17 by seplee            #+#    #+#             */
/*   Updated: 2020/12/08 22:33:30 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_repeat(char *str)
{
	int i;

	i =  0;
	if (*str <= 'z' && *str >= 'a')
			i = *str - 96;
	else if(*str <= 'Z' && *str >= 'A')
			i = *str - 64;
	else 
		i = 1;
	return (i);
}

void	 ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;

	if(argc ==2)
	{
		while (*argv[1])
		{
			i = ft_repeat(argv[1]);
			while (i >= 1)
			{
				ft_putchar((*argv[1]));
				i--;
			}
			argv[1]++;
		}
	}
	ft_putchar('\n');
}
