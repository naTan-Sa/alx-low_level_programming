0x0A. C - argc, argv

Overview
This project focuses on command-line arguments in C.
You will learn how to receive and process arguments passed to a program using `argc` and `argv`, validate input, convert strings to numbers, and handle simple CLI utilities with proper error handling and Betty style.

Concepts
Command-line arguments (argc, argv)
Argument parsing and validation
String to integer conversion (atoi)
Input/output with printf and _putchar
Using (void) or __attribute__((unused)) for unused parameters
Error handling and exit codes

Learning Objectives
By the end of this project, you should be able to:

Explain how to use arguments passed to a C program
Describe the two common `main` prototypes and when to use each
Use `(void)` or `__attribute__((unused))` to silence unused-parameter warnings
Parse and validate command-line arguments
Convert argument strings to integers for simple use cases
Handle errors and return appropriate exit codes

Requirements
Editors: vi, vim, emacs
Compiler: gcc on Ubuntu 20.04 LTS
Options: -Wall -Werror -Wextra -pedantic -std=gnu89
All files must end with a new line
A README.md file at the project root is mandatory
Code must follow Betty style
No global variables, maximum 5 functions per file
Include function prototypes (and _putchar prototype) in main.h
Standard library functions allowed where appropriate

Tasks
0-whatsmyname.c – Print the program's name, followed by a new line (prints path + name; renaming the executable changes output without recompiling)
1-args.c – Print the number of arguments passed to the program (excluding the program name)
2-args.c – Print all arguments received, one per line (including argv[0])
3-mul.c – Multiply two numbers given as arguments; print result or print "Error" and return 1 if wrong arg count
4-add.c – Add positive numbers passed as arguments; print sum, print 0 if none, print "Error" and return 1 on non-digit input
100-change.c – Minimal Number of Coins for Change (advanced): given cents, print minimum number of coins (25,10,5,2,1); print "Error" if arg count != 1; print 0 if negative

