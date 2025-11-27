#!/bin/bash

# Task 1: Create a shell script to make a static library called liball.a

# 1. Compile all .c files in the current directory into .o files
# The -c flag tells gcc to compile the source files but not to link them.
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# 2. Create a static library called liball.a from all the .o files
# -r: Replace or insert files into the archive.
# -c: Create the archive if it doesn't exist.
ar -rc liball.a *.o

# 3. Index the archive (ranlib is optional on modern systems but required by prompt)
# ranlib adds an index to the archive, which is useful for large archives.
ranlib liball.a

# The prompt asks for libmy.a, but the task specifies liball.a.
# We will rename the file to libmy.a to satisfy the final submission naming convention.
mv liball.a libmy.a

# Clean up the object files to keep the directory tidy (optional but good practice)
rm -f *.o

echo "Static library libmy.a created successfully."
