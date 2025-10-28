# 0x0C. C - More malloc, free

## Overview
This project continues the exploration of **dynamic memory allocation** in C using functions like `malloc`, `free`, `calloc`, and `realloc`.  
You will learn how to handle memory safely, manage allocation errors, and work with memory blocks dynamically.  
It also includes an advanced task to multiply large positive numbers represented as strings.

---

## Concepts
- Automatic and dynamic memory allocation  
- The use of `malloc`, `free`, `calloc`, and `realloc`  
- Memory errors and process termination using `exit()`  
- Working with large numbers and strings without using standard library functions

---

## Learning Objectives
By the end of this project, you should be able to:

- Use the `exit` function correctly  
- Explain and implement the `calloc` and `realloc` functions  
- Allocate, reallocate, and free dynamic memory properly  
- Handle memory allocation failures  
- Perform arithmetic operations on large numbers stored as strings  
- Write efficient C programs without memory leaks

---

## Requirements
- **Editors:** `vi`, `vim`, `emacs`  
- **Compiler:** `gcc` on Ubuntu 20.04 LTS  
- **Options:** `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- Code must follow **Betty style**  
- No global variables  
- Maximum **5 functions per file**  
- Only the following C standard library functions are allowed:  
  - `malloc`, `free`, and `exit`  
- You are allowed to use `_putchar`  
- A header file **main.h** must contain all function prototypes  
- All files must end with a new line

---

## Tasks

### 0. malloc_checked
**File:** `0-malloc_checked.c`  
Allocates memory using `malloc`.  
If allocation fails, the program terminates with status value `98`.

---

### 1. string_nconcat
**File:** `1-string_nconcat.c`  
Concatenates two strings and returns a pointer to a newly allocated space in memory containing the first string followed by the first `n` bytes of the second string.

---

### 2. _calloc
**File:** `2-calloc.c`  
Allocates memory for an array of `nmemb` elements of `size` bytes each and initializes the memory to zero.  
Similar to the standard `calloc` function.

---

### 3. array_range
**File:** `3-array_range.c`  
Creates an array of integers containing all values from `min` (included) to `max` (included), ordered from `min` to `max`.

---

### 4. _realloc
**File:** `100-realloc.c`  
Reallocates a memory block using `malloc` and `free`, mimicking the behavior of the standard `realloc` function.

---

### 5. We must accept finite disappointment, but never lose infinite hope
**File:** `101-mul.c`  
A program that multiplies two positive numbers passed as arguments.  
- Usage: `mul num1 num2`  
- Numbers are passed in base 10  
- If incorrect input or arguments are provided, the program prints `Error` and exits with status `98`.  
- Handles very large numbers represented as strings.  

---

## Example Compilation and Execution
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 101-mul.c _putchar.c -o 101-mul
./101-mul 10 98
# Output: 980
