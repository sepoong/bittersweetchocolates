/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:31:20 by seushin           #+#    #+#             */
/*   Updated: 2020/11/28 23:17:54 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include <stdlib.h>

int			is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int			count_num(char *str)
{
	int		res;

	res = 0;
	while (*str != 0)
	{
		if (is_num(*str))
			res++;
		str++;
	}
	return (res);
}

int			*str_to_int(char *str, int size)
{
	int		*res;
	int		i;

	res = (int *)malloc(sizeof(int) * (size * 4));
	i = 0;
	while (*str != 0)
	{
		if (is_num(*str))
		{
			res[i] = *str - 48;
			i++;
		}
		str++;
	}
	if (i == size * 4)
		return (res);
	else
		return (int *)(NULL);
}
