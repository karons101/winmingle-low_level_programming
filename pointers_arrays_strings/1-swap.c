/**
 *  * swap_int - swaps the values of two integers using pointers
 *   * @a: pointer to the first integer
 *    * @b: pointer to the second integer
 *     *
 *      * Return: void
 *       */
void swap_int(int *a, int *b)
{
		int temp;

			/* 1. Store the value of *a in temp */
			temp = *a;
				/* 2. Set the value of *a to the value of *b */
				*a = *b;
					/* 3. Set the value of *b to the original value of *a (stored in temp) */
					*b = temp;
}
