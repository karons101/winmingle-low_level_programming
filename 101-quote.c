#include <unistd.h>

/**
 * main - Prints a quote to the standard error stream.
 *
 * Description: Uses the write function (file descriptor 2 for stderr)
 * to print a string and returns 1, as required.
 *
 * Return: Always 1 (Error condition)
 */
int main(void)
{
    /* The string to be printed */
    const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    
    /* Calculate the length of the string, including the null terminator */
    size_t len = 59; 
    /* The literal string length is 59 characters, including the newline \n */
    
    /* write(file_descriptor, buffer, count) 
     * 2 is the file descriptor for standard error (stderr)
     * 1 is the file descriptor for standard output (stdout)
     * 0 is the file descriptor for standard input (stdin)
     */
    write(2, quote, len);
    
    /* Return 1 as required by this task */
    return (1);
}
