#include "main.h"

/**
 *  print_chessboard - a function that prints the chessboard.
 *
 *  @a: rows.
 *
 *  Return: no return.
 */

void print_chessboard(char (*a)[8])

{
	int cnt, cnq;

	for (cnt = 0; cnt < 8; cnt++)
	{
		for (cnq = 0; cnq < 8; cnq++)
		{
			_putchar(a[cnt][cnq]);
		}
		_putchar('\n');
	}

}
