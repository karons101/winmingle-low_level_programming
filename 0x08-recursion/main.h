#ifndef MAIN_H
#define MAIN_H

/* Standard _putchar function */
int _putchar(char c);

/* Task 0: Prints a string, followed by a new line, using recursion */
void _puts_recursion(char *s);

/* Task 1: Prints a string in reverse using recursion */
void _print_rev_recursion(char *s);

/* Task 2: Returns the length of a string using recursion */
int _strlen_recursion(char *s);

/* Task 3: Returns the factorial of a given number */
int factorial(int n);

/* Task 4: Returns the value of x raised to the power of y */
int _pow_recursion(int x, int y);

/* Task 5: Returns the natural square root of a number */
int _sqrt_recursion(int n);

/* Task 6: Returns 1 if the input integer is a prime number, otherwise 0 */
int is_prime_number(int n);

/* Task 7: Returns 1 if a string is a palindrome and 0 if not */
int is_palindrome(char *s);

/* Task 8: Compares two strings with wildcard support */
int wildcmp(char *s1, char *s2);

#endif /* MAIN_H */
