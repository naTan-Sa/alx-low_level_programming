# 0x00. C - Hello, World

## About the Project

This project is part of the **ALX Low-Level Programming curriculum** curriculum. It focuses on understanding the C preprocessor, compilation process, and basic C programming tasks. The main goal is to learn how to manipulate C files through preprocessing, compiling, assembling, and linking, and write simple C programs.

---

## Project Details

- **Topic:** 0x00. C - Hello, World
- **Weight:** 1
- **Duration:** Aug 11, 2025
- **Auto-review score:** 75/75 mandatory, 20/25 optional
- **Overall score:** 180% (Mandatory 100%, Optional 80%)

---

## What I Learned

- How to run the C preprocessor on source files using Bash scripts
- How to compile C files without linking to produce object files
- How to generate assembly code from C source files
- How to compile C programs into executables
- Basic C syntax for printing text using `puts` and `printf`
- How to check sizes of data types using `sizeof`
- How to write C programs that produce output to standard error without standard print functions
- Intel assembly syntax generation
- Handling environment variables in Bash scripts

---

## Requirements

- Scripts must run on Ubuntu 20.04 LTS
- Use only `vi`, `vim`, or `emacs` editors
- Scripts must be executable (`chmod u+x`)
- Scripts should be written in Bash
- Use environment variable `$CFILE` for C source filenames in scripts
- Write a `README.md` in the root directory explaining the project and scripts

---

## Files & Scripts Overview

| Filename        | Description                                                                                                              | Type         |
|-----------------|--------------------------------------------------------------------------------------------------------------------------|--------------|
| `0-preprocessor`| Runs the C file through the preprocessor and saves output to a file named `c`. Uses environment variable `$CFILE`.       | Shell Script |
| `1-compiler`    | Compiles a C file without linking, producing an object file with `.o` extension. Uses `$CFILE`.                           | Shell Script |
| `2-assembler`   | Generates the assembly code of a C file and saves it to a `.s` file. Uses `$CFILE`.                                       | Shell Script |
| `3-name`        | Compiles a C file and creates an executable named `cisfun`. Uses `$CFILE`.                                               | Shell Script |
| `4-puts.c`      | Prints `"Programming is like building a multilingual puzzle` followed by a new line, using `puts`. Returns `0`.           | C Program    |
| `5-printf.c`    | Prints `with proper grammar, but the outcome is a piece of art,` followed by a new line, using `printf`. Returns `0`.     | C Program    |
| `6-size.c`      | Prints the size of various data types on the system, using the `sizeof` operator.                                         | C Program    |
| `100-intel`     | Generates assembly code (Intel syntax) of a C file. Uses `$CFILE`.                                                       | Shell Script |
| `101-quote.c`   | Prints `and that piece of art is useful" - Dora Korpar, 2015-10-19` to stderr, without `printf` or `puts`. Returns `1`.   | C Program    |
