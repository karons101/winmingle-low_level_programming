# 0x0F. C - Function Pointers

## Description
This project explores the concept of **Function Pointers** in C. Unlike standard pointers that point to data (variables, arrays, structs), function pointers point to executable code in the text segment of memory. This allows functions to be passed as arguments to other functions, enabling dynamic and flexible code execution.

## Learning Objectives
* What function pointers are and how to use them.
* What a function pointer actually holds (the address of the entry point of a function).
* Where a function pointer points to in virtual memory (the Code/Text segment).

## Files and Tasks

| File | Description |
| --- | --- |
| `0-print_name.c` | A function that prints a name using a function pointer as a callback. |
| `1-array_iterator.c` | Executes a function (passed as a pointer) on each element of an array. |
| `2-int_index.c` | Searches for an integer in an array using a comparison function pointer. |
| `3-calc.h` | Header file for a simple calculator using a dispatcher table. |
| `3-op_functions.c` | Contains basic math functions (add, sub, mul, div, mod). |
| `3-get_op_func.c` | Selects the correct math function based on an operator string. |
| `3-main.c` | Main entry point for the calculator program. |
| `100-main_opcodes.c` | A program that prints its own opcodes in hexadecimal. |

## Requirements
* Compiled on Ubuntu 20.04 LTS.
* Compiler: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.
* No global variables allowed.
* Maximum 5 functions per file.# 0x0F. C - Function Pointers

## Description
This project explores the concept of **Function Pointers** in C. Unlike standard pointers that point to data (variables, arrays, structs), function pointers point to executable code in the text segment of memory. This allows functions to be passed as arguments to other functions, enabling dynamic and flexible code execution.

## Learning Objectives
* What function pointers are and how to use them.
* What a function pointer actually holds (the address of the entry point of a function).
* Where a function pointer points to in virtual memory (the Code/Text segment).

## Files and Tasks

| File | Description |
| --- | --- |
| `0-print_name.c` | A function that prints a name using a function pointer as a callback. |
| `1-array_iterator.c` | Executes a function (passed as a pointer) on each element of an array. |
| `2-int_index.c` | Searches for an integer in an array using a comparison function pointer. |
| `3-calc.h` | Header file for a simple calculator using a dispatcher table. |
| `3-op_functions.c` | Contains basic math functions (add, sub, mul, div, mod). |
| `3-get_op_func.c` | Selects the correct math function based on an operator string. |
| `3-main.c` | Main entry point for the calculator program. |
| `100-main_opcodes.c` | A program that prints its own opcodes in hexadecimal. |

## Requirements
* Compiled on Ubuntu 20.04 LTS.
* Compiler: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.
* No global variables allowed.
* Maximum 5 functions per file.
