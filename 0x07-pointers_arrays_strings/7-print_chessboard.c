#include <stdio.h>

void _putchar(char c);

void print_chessboard(char (*a)[8])
{
	int y, x;

	void _putchar(char c);

	y = 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[y][x]);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
