#include "function_pointers.h"

/**
 *  * print_name - prints a name using a function pointer
 *   * @name: name to print
 *    * @f: pointer to the function to use
 *     */
void print_name(char *name, void (*f)(char *))
{
		if (name && f)
					f(name);
}
