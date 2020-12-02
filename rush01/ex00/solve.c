/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:53:05 by seushin           #+#    #+#             */
/*   Updated: 2020/11/29 00:08:56 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include "print.h"
#include "solve.h"
#include <stdlib.h>
#include <unistd.h>

int			**create_board(int size)
{
	int		**res;
	int		i;
	int		j;

	res = (int **)malloc(sizeof(int *) * size);
	i = 0;
	while (i < size)
	{
		res[i] = (int *)malloc(sizeof(int) * size);
		j = 0;
		while (j < size)
		{
			res[i][j] = 0;
			j++;
		}
		i++;
	}
	return (res);
}

void		free_board(int **board, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		free(board[i]);
		i++;
	}
	free(board);
}

int			is_possible(int **board, int i, t_point p, int size)
{
	int		point;

	point = 0;
	while (point < size)
	{
		if (board[p.y][point] == i || board[point][p.x] == i)
			return (0);
		point++;
	}
	return (1);
}

int			solve(int **board, int *view, t_point point, int size)
{
	int		i;

	if (point.x == size)
	{
		point.x = 0;
		point.y++;
	}
	if (point.y == size)
		return (check_board(board, view, size));
	i = 1;
	while (i <= size)
	{
		if (is_possible(board, i, point, size))
		{
			board[point.y][point.x] = i;
			point.x++;
			if (solve(board, view, point, size))
				return (1);
			point.x--;
			board[point.y][point.x] = 0;
		}
		i++;
	}
	return (0);
}

int			rush(int *view, int size)
{
	int		**board;
	int		ok;
	t_point	p;

	p.x = 0;
	p.y = 0;
	board = create_board(size);
	ok = solve(board, view, p, size);
	if (ok)
		print_board(board, size);
	free_board(board, size);
	free(view);
	return (ok);
}
