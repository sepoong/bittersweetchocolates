/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seushin <seushin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:25:59 by seushin           #+#    #+#             */
/*   Updated: 2020/11/28 22:32:53 by seushin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include <stdio.h>

int			check_colup(int **board, int *view, int size)
{
	int		count;
	int		max;
	int		i;
	int		j;

	j = -1;
	while (j++ < size - 1)
	{
		count = 1;
		i = 1;
		max = board[i - 1][j];
		while (i < size)
		{
			if (max < board[i][j]){
				count++;
				max = board[i][j];
			}
			i++;
		}
		if (count != *view)
			return (0);
		view++;
	}
	return (1);
}

int			check_coldown(int **board, int *view, int size)
{
	int		count;
	int		max;
	int		i;
	int		j;

	j = -1;
	while (j++ < size - 1)
	{
		count = 1;
		i = 1;
		max = board[size - 1][j];
		while (i < size)
		{
			if (max < board[size - i - 1][j])
			{
				count++;
				max = board[size - i - 1][j];
			}
			i++;
		}
		if (count != *view)
			return (0);
		view++;
	}
	return (1);
}

int			check_rowleft(int **board, int *view, int size)
{
	int		count;
	int		max;
	int		i;
	int		j;

	j = -1;
	while (j++ < size - 1)
	{
		count = 1;
		i = 1;
		max = board[j][i - 1];
		while (i < size)
		{
			if (max < board[j][i])
			{
				count++;
				max = board[j][i];
			}
			i++;
		}
		if (count != *view)
			return (0);
		view++;
	}
	return (1);
}

int			check_rowright(int **board, int *view, int size)
{
	int		count;
	int		max;
	int		i;
	int		j;

	j = -1;
	while (j++ < size - 1)
	{
		count = 1;
		i = 1;
		max = board[j][size - 1];
		while (i < size)
		{
			if (max < board[j][size - i - 1])
			{
				count++;
				max = board[j][size - i - 1];
			}
			i++;
		}
		if (count != *view)
			return (0);
		view++;
	}
	return (1);
}

int			check_board(int **board, int *view, int size)
{
	if (!check_colup(board, view, size)
			|| !check_coldown(board, view + size, size)
			|| !check_rowleft(board, view + (size * 2), size)
			|| !check_rowright(board, view + (size * 3), size))
		return (0);
	return (1);
}
