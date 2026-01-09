# 0x0B. C - malloc, free

## Description
This project covers dynamic memory allocation in C using `malloc` and `free`. It explores the differences between stack and heap memory, how to allocate memory for arrays, strings, and 2D grids, and how to prevent memory leaks using Valgrind.

## Learning Objectives
* Explain automatic vs. dynamic allocation.
* Use `malloc` and `free` correctly.
* Detect and avoid memory leaks.
* Allocate and free 2D dynamic arrays.

## Requirements
* Compiled on Ubuntu 20.04 LTS.
* Compiler: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.

## Task Summary
0. **create_array**: Creates an array of chars initialized with a specific char.
1. **_strdup**: Returns a pointer to a newly allocated copy of a string.
2. **str_concat**: Concatenates two strings into a new memory space.
3. **alloc_grid**: Returns a pointer to a 2D array of integers.
4. **free_grid**: Frees a 2D grid previously created.
5. **argstostr**: Concatenates all program arguments into one string.
6. **strtow**: Splits a string into words.
