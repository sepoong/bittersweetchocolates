/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:58:30 by seushin           #+#    #+#             */
/*   Updated: 2020/11/28 23:19:07 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include "print.h"
#include "str.h"
#include "solve.h"
#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		*input;
	int		size;

	if (argc != 2)
	{
		err();
		return (1);
	}
	size = count_num(argv[1]);
	if (size % 4 != 0)
	{
		err();
		return (1);
	}
	size /= 4;
	input = str_to_int(argv[1], size);
	if (input != NULL && rush(input, size))
		return (0);
	else
		err();
	return (1);
}
