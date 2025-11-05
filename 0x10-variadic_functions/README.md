# 0x10. C - Variadic functions

## 📖 Overview
This project introduces **variadic functions** in C — functions that accept a variable number of arguments. It explores how to use macros from `<stdarg.h>` such as `va_start`, `va_arg`, and `va_end` to handle these arguments dynamically.

---

## 🧠 Concepts Covered
- Variadic functions in C
- Use of `stdarg.h` macros: `va_start`, `va_arg`, and `va_end`
- Use of the `const` keyword in function parameters

---

## 🎯 Learning Objectives
By the end of this project, you should be able to:
- Explain what variadic functions are and why they are useful
- Use macros to iterate through variable arguments
- Apply the `const` type qualifier correctly

---

## ⚙️ Requirements
- All code compiled on **Ubuntu 20.04 LTS** using:


- Files must:
- End with a new line
- Follow **Betty** style and documentation
- Contain no global variables
- Have at most **5 functions per file**
- Only allowed standard library macros:
- `va_start`, `va_arg`, `va_end`
- Use `_putchar` if needed (don’t push your own version)
- All prototypes must be in **`variadic_functions.h`** with include guards

---

## 🧩 Tasks

### 0. Beauty is variable, ugliness is constant
Write a function that returns the sum of all its parameters.  
**Prototype:** `int sum_them_all(const unsigned int n, ...);`  
- If `n == 0`, return `0`.

---

### 1. To be is to be the value of a variable
Write a function that prints numbers, followed by a new line.  
**Prototype:** `void print_numbers(const char *separator, const unsigned int n, ...);`  
- If `separator` is `NULL`, don’t print it.  
- Print a newline at the end.

---

### 2. One woman's constant is another woman's variable
Write a function that prints strings, followed by a new line.  
**Prototype:** `void print_strings(const char *separator, const unsigned int n, ...);`  
- If `separator` is `NULL`, don’t print it.  
- If one of the strings is `NULL`, print `(nil)` instead.

---

### 3. To be is a to be the value of a variable
Write a function that prints anything.  
**Prototype:** `void print_all(const char * const format, ...);`  
- `c`: char  
- `i`: integer  
- `f`: float  
- `s`: string (print `(nil)` if `NULL`)  
- Ignore unsupported format characters  
- Use a maximum of **2 while loops**, **2 ifs**, and **9 variables**  
- End with a newline

---

**Repository:**  
`alx-low_level_programming`  
**Directory:**  
`0x10-variadic_functions`

