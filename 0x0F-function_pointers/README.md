# 0x0F. C - Function Pointers

## Overview
This project focuses on **function pointers in C**.  
You will learn how to store addresses of functions in pointers, call functions indirectly, pass functions as parameters, and use these techniques to create modular and flexible programs.

---

## Concepts
- Function pointers  
- Passing functions as arguments (callbacks)  
- Array iteration with function pointers  
- Searching arrays using function pointers  
- Creating simple calculators using function pointers  
- Printing opcodes of compiled functions  

---

## Learning Objectives
By the end of this project, you should be able to:

- Explain what function pointers are and how to use them  
- Describe what a function pointer holds and where it points in memory  
- Pass functions as arguments to other functions  
- Implement dynamic behavior using function pointers  
- Write modular, reusable C code following Betty style  

---

## Requirements
- Editors: `vi`, `vim`, `emacs`  
- Compiler: `gcc` on Ubuntu 20.04 LTS  
- Compilation options: `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- All files must end with a new line  
- A `README.md` file at the project root is mandatory  
- Code must follow **Betty style**  
- No global variables  
- Maximum 5 functions per file  
- Include function prototypes (and `_putchar` prototype) in `function_pointers.h`  
- Allowed standard library functions: `malloc`, `free`, `exit`  

---

## Tasks

### 0-print_name.c
Print a name using a function pointer.

### 1-array_iterator.c
Execute a function given as a parameter on each element of an array.

### 2-int_index.c
Search for an integer in an array using a comparison function.

### 3-calc.h, 3-op_functions.c, 3-get_op_func.c, 3-main.c
Create a simple calculator program that performs basic arithmetic operations using function pointers.

### 100-main_opcodes.c
Print the opcodes of its own main function.

