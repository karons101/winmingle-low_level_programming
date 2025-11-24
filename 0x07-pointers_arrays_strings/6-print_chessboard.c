#include "main.h"

/**
 *  * print_chessboard - Prints an 8x8 chessboard represented by a 2D array.
 *   * @a: Pointer to an 8x8 array of characters (the chessboard).
 *    *
 *     * Note: A 2D array is passed as a pointer to the first row array.
 *      */
void print_chessboard(char (*a)[8])
{
		int row, col;

			for (row = 0; row < 8; row++)
					{
								for (col = 0; col < 8; col++)
											{
															_putchar(a[row][col]);
																	}
										_putchar('\n');
											}
}
