# 0x1C. C - Makefiles

This repository contains tasks for the **0x1C. C - Makefiles** project at **ALX Low-Level Programming**. The project focuses on understanding GNU Make, build automation, incremental compilation, Makefile syntax/variables, and implicit/explicit rules. Additionally, it includes a Python technical interview task on grid traversal.

---

## 📑 Project Overview

* **Weight:** 1
* **Score:** 200.0% (100.0% Mandatory & 100.0% Optional)
* **Directory:** `0x1C-makefiles`
* **Repository:** `alx-low_level_programming`

---

## 🎯 Learning Objectives

By completing this project, you will understand:
* What `make` and `Makefiles` are, and why/when to use them.
* What rules are (explicit and implicit) and how to write them.
* How to define and use variables in a Makefile (`CC`, `CFLAGS`, `SRC`, `OBJ`, `NAME`, `RM`).
* How incremental compilation works to recompile only modified files.
* How to create clean and re-compilation rules (`clean`, `oclean`, `fclean`, `re`).
* How to manage dependencies like header files (`m.h`) and handle target collisions (`.PHONY`).

---

## 💻 Requirements

* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc 9.3.0`
* **Make Version:** `GNU Make 4.2.1`
* **Allowed Editors:** `vi`, `vim`, `emacs`
* **Python Version:** Python 3.8+ (for Task 5)
* All files must end with a new line.
* Code must follow strict ALX formatting and coding style guidelines.

---

## 📁 File Structure & Task Summaries

| File | Type | Description |
| :--- | :--- | :--- |
| **`0-Makefile`** | Makefile | Basic Makefile. Contains an `all` rule that builds the `school` executable directly using `gcc main.c school.c -o school`. No variables used. |
| **`1-Makefile`** | Makefile | Introduces basic variables `CC` (`gcc`) and `SRC` (`main.c school.c`) to build the `school` executable under the `all` rule. |
| **`2-Makefile`** | Makefile | Implements **incremental compilation** using `OBJ` (`$(SRC:.c=.o)`) and `NAME` variables so only modified source files are recompiled. |
| **`3-Makefile`** | Makefile | Expands target rules to include `clean` (removes temp files & executable), `oclean` (removes `.o` files), `fclean` (removes temp, `.o`, and executable), and `re` (forces full recompile). Defines `RM`. |
| **`4-Makefile`** | Makefile | Comprehensive Makefile adding `CFLAGS = -Wall -Werror -Wextra -pedantic` for strict standard compilation. |
| **`5-island_perimeter.py`** | Python | Function `island_perimeter(grid)` that calculates and returns the total perimeter of an island in a 2D grid matrix. Pure Python, no external libraries. |
| **`100-Makefile`** | Makefile | **Advanced Challenge:** Highly restricted Makefile requiring implicit rules, explicit header dependency (`m.h`), `.PHONY` targets, strict usage caps on `$(CC)` and `$(RM)`, and prohibiting direct `$(CFLAGS)` / `$(OBJ)` usage strings. |

---

## 🛠️ Usage Instructions

### 1. Compiling with Makefiles

To build the executable using a standard Makefile (e.g., `4-Makefile`):

```bash
make -f 4-Makefile
o recompile only modified files:

```bash
make all -f 4-Makefile
To perform clean-up actions:

```bash
# Clean binary and editor temporary files
make clean -f 4-Makefile

# Clean object files
make oclean -f 4-Makefile

# Full clean (binary + object files + temporary files)
make fclean -f 4-Makefile

# Force complete re-compilation
make re -f 4-Makefile
### 2. Running the Python Island Perimeter Function
To test the island_perimeter implementation with a test script (e.g., 5-main.py):

```bash
chmod +x 5-main.py
./5-main.py
Example Output:

Plaintext
12
📄 License & Credits
Program: ALX Low-Level Programming

Author/Student Solutions: Task implementation & Makefile design compliant with ALX curriculum specifications.
