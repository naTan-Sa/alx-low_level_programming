# 0x03. C - Debugging

## Project Overview
This project focuses on **debugging C programs**. It teaches how to find and fix errors, interpret compiler messages, and apply logical reasoning to correct broken code.  

Debugging is a crucial skill for any software engineer, allowing you to ensure that programs run correctly and efficiently.

---

## Learning Objectives
At the end of this project, you are expected to be able to:
- Explain what debugging is.
- Describe manual debugging methods.
- Read and understand compiler error messages.
- Correct errors in C programs using logical reasoning.

---

## Requirements
- **Editors:** `vi`, `vim`, `emacs`
- **OS:** Ubuntu 20.04 LTS
- **Compiler flags:** `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Code style:** Betty style (checked with `betty-style.pl` and `betty-doc.pl`)
- All files must end with a new line.
- Solutions must be your own work (no plagiarism).

---

## Tasks

### 0. Multiple mains
- **Goal:** Test `positive_or_negative()` with `0`.
- **Files:** `0-main.c`, `main.h`
- **Expected Output:**
```
0 is zero
```

---

### 1. Like, comment, subscribe
- **Goal:** Avoid an infinite loop in the provided code.
- **File:** `1-main.c`
- **Expected Output:**
```
Infinite loop incoming :(
Infinite loop avoided! \o/
```

---

### 2. 0 > 972?
- **Goal:** Print the largest of three integers.
- **Files:** `2-largest_number.c`, `main.h`
- **Expected Output:**
```
972 is the largest number
```

---

### 3. Leap year
- **Goal:** Calculate day of the year and remaining days, taking leap years into account.
- **Files:** `3-convert_day.c`, `3-print_remaining_days.c`, `main.h`
- **Expected Output (Example A):**
```
Date: 04/01/1997
Day of the year: 91
Remaining days: 274
```
- **Expected Output (Example B - Leap Year):**
```
Date: 02/29/2000
Day of the year: 60
Remaining days: 306
```

---

## Repo Structure
```
0x03-debugging/
├── 0-main.c
├── 1-main.c
├── 2-largest_number.c
├── 3-convert_day.c
├── 3-print_remaining_days.c
├── main.h
└── README.md
```

---

## Notes
- Use the provided main files to test your solutions.
- Do **not** modify the main files except as allowed in specific tasks.
- Ensure all code passes **Betty style** checks.
- All work must be original; plagiarism will result in removal from the program.

