#include "main.h"

/**
 *  * set_string - Sets the value of a pointer to a char.
 *   * @s: A pointer to a pointer to a char (char **). This holds the address
 *    * of the pointer variable we want to change.
 *     * @to: The char pointer (string) whose address will be assigned to *s.
 *      *
 *       * Logic: *s dereferences the double pointer (s) to access the actual
 *        * pointer variable (like s1 in the main function). We then set the value
 *         * of that pointer variable to be 'to'.
 *          *
 *           * 
 *            */
void set_string(char **s, char *to)
{
		*s = to;
}
