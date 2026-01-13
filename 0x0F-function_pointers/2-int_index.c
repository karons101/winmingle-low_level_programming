#include "function_pointers.h"

/**
 *  * int_index - searches for an integer
 *   * @array: the array
 *    * @size: number of elements in array
 *     * @cmp: pointer to the function to be used to compare values
 *      *
 *       * Return: index of first element, or -1 if no match or size <= 0
 *        */
int int_index(int *array, int size, int (*cmp)(int))
{
		int i;

			if (array && cmp && size > 0)
					{
								for (i = 0; i < size; i++)
											{
															if (cmp(array[i]))
																				return (i);
																	}
									}
				return (-1);
}
