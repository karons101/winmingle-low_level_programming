# _printf: A Custom C Library implementation

This project is a custom implementation of the `printf` function in C. It was developed as a collaboration to understand the inner workings of variadic functions, buffer management, and complex string formatting.

## Project Requirements
* All files compiled on **Ubuntu 20.04 LTS** using `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
* No global variables used.
* All code follows the **Betty** style and documentation format.
* Optimized buffer management using a local 1024-byte buffer to minimize `write` system calls.

## Implemented Tasks

| Task | Specifier/Feature | Description |
| :--- | :--- | :--- |
| **0** | `%c`, `%s`, `%%` | Basic char, string, and percent literal |
| **1** | `%d`, `%i` | Signed decimal integers |
| **2** | `%b` | Custom binary conversion |
| **3** | `%u`, `%o`, `%x`, `%X` | Unsigned, Octal, and Hexadecimal |
| **4** | **Buffer** | Implementation of a 1024-char local buffer |
| **5** | `%S` | Custom string (prints non-printables as `\xHH`) |
| **6** | `%p` | Pointer address in hexadecimal |
| **7** | `+`, `space`, `#` | Flag characters for numeric formatting |
| **8** | `l`, `h` | Length modifiers for integers and unsigned |
| **9** | **Field Width** | Handling minimum width for all specifiers |
| **10** | **Precision** | Handling precision for strings and integers |
| **11** | `0` | Zero-padding flag |
| **12** | `-` | Left-alignment flag |
| **13** | `%r` | Custom reverse string specifier |
| **14** | `%R` | Custom ROT13 string specifier |

## Code Architecture

The engine uses a dispatcher pattern with a struct array mapping characters to function pointers.



1. **The Engine (`_printf.c`)**: Loops through the format string.
2. **The Parser (`get_flag.c`)**: Extracts modifiers when a `%` is encountered.
3. **The Dispatcher**: Matches the specifier (e.g., `d`) to its handler (e.g., `print_int`).
4. **The Handlers**: Process the `va_arg` data and send characters to the buffer.
5. **The Buffer (`_putchar`)**: Collects up to 1024 chars before calling the `write` system call.

## Examples

```c
_printf("%S\n", "Best\nSchool"); // Prints: Best\x0ASchool
_printf("%-10.5d\n", 42);       // Prints: 00042     
_printf("%R\n", "Hello");        // Prints: Uryyb
