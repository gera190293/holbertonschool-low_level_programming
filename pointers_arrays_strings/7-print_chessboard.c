#include "main.h"
/**
 *print_chessboard - print a chessboard
 *@a: chessboard
 *
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		if (i < 7)
		{
			for (j = 0; j < 8; j++)
			{
				_putchar(a[i][j]);
			}
			_putchar(10);
		}
		else
			_putchar(a[i][j];
	}	
}
