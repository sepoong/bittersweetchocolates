#include <unistd.h>

void	print_board(int **board,int size)
{
	int		x;
	int		y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			ft_putchar(board[y][x]);
			x++;
		};
		y++;	
	}
}

void	ft_putchar(int a)
{
	char c;

	c = a + 48;
	write(1, &c, 1);
}
