0x09. C - Static Libraries

This project covers the creation and usage of static libraries in C. Static libraries are collections of object files (.o) that are linked into the final executable at compile time.

Key Concepts

Static Library (.a file): An archive file containing object code (.o) that the linker copies directly into the program's final executable file.

Archiver (ar): The Unix utility used to create, modify, and extract contents from archives (static libraries).

Symbol Table (ranlib): The utility used to generate an index of the contents of an archive and store it in the archive itself. This speeds up the linking process by allowing the compiler to find functions quickly.

Name List (nm): The utility used to list the symbols (functions and variables) from object files.


Tasks

      File                                         Description
   main.h                                        Header file containing prototypes for all 20 library functions.

create_static_lib.sh                             Bash script to compile all .c files into object files (.o) and archive them into the static library liball.a.

libmy.a / liball.a                               The resulting static library archive.

_islower.c, _isalpha.c, etc.                     Source files implementing the required functions.
