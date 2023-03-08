#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: dimensional array
 **/

void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 8; i++)
{
_putchar(a[i][j]);
}
_putchar('\n')
}
}
