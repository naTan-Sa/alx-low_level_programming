# 0x0D. C - Preprocessor

## Overview
This project explores the C preprocessor in C, including macros, include guards, and standard predefined macros.  
You will learn how to define object-like and function-like macros, prevent double inclusion of header files, and work with predefined macros such as `__FILE__`, `__LINE__`, `__DATE__`, and `__TIME__`.

## Concepts
- Object-like macros  
- Function-like macros  
- Standard predefined macros (`__FILE__`, `__LINE__`, `__DATE__`, `__TIME__`, `__STDC__`, etc.)  
- Include guards to prevent double inclusion  
- Conditional compilation  

## Learning Objectives
By the end of this project, you should be able to:  

- Define and use macros effectively  
- Understand and utilize standard predefined macros  
- Protect header files using include guards  
- Explain the purpose and functionality of the C preprocessor  

## Requirements
- Editors: vi, vim, emacs  
- Compiler: gcc on Ubuntu 20.04 LTS  
- Options: `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- Code must follow Betty style  
- No global variables  
- Maximum 5 functions per file  
- All header files must be include guarded  
- All files must end with a new line  
- Only the following C standard library functions are allowed: `malloc`, `free`, and `exit`  
- You are allowed to use `_putchar`  

## Tasks

### 0. Object-like Macro
**File:** `0-object_like_macro.h`  
Defines a macro named `SIZE` as an abbreviation for the token `1024`.  

### 1. Pi
**File:** `1-pi.h`  
Defines a macro named `PI` as an abbreviation for the token `3.14159265359`.  

### 2. File name
**File:** `2-main.c`  
Prints the name of the file it was compiled from using the standard predefined macro `__FILE__`.  

### 3. Function-like Macro
**File:** `3-function_like_macro.h`  
Defines a function-like macro `ABS(x)` that computes the absolute value of a number `x`.  

### 4. SUM
**File:** `4-sum.h`  
Defines a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.  

## Example Compilation and Execution

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c -o 0-main
./0-main

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c -o 1-main
./1-main

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c -o 2-main
./2-main

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c -o 3-main
./3-main

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-main.c -o 4-main
./4-main

