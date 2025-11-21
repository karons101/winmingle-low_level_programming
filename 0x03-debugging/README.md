0x03-debugging

This directory contains solutions for the "Debugging and Code Correction" module of the WinMingle Community Software Engineering Training Program.

Compilation and Execution Summary

Task 0: positive_or_negative

Tests the function with input 0.
gcc positive_or_negative.c 0-main.c -o 0-main

Task 1: Infinite Loop Fix

Fixed the infinite loop in 1-main.c by commenting out the while block and fixing the \o escape sequence error.
gcc 1-main.c -o 1-main

Task 2: largest_number Fix

Fixed a logical error in 2-largest_number.c by using the >= operator to correctly identify the largest number among three inputs.
gcc 2-largest_number.c 2-main.c -o 2-main

Task 3: Leap Year Fix

Fixed the logic in 3-print_remaining_days.c to correctly handle leap years, ensuring February 29th is accounted for in the day count when appropriate.
gcc 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b
