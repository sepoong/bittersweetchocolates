/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:03:42 by seplee            #+#    #+#             */
/*   Updated: 2020/12/03 01:53:56 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 && str[i] > 0 || str[i] == 127)
		{
			



int	main()
{
	char sstr = "you are \\ so\ beautiful";

	ft_putstr_non_printable(sstr);
}
