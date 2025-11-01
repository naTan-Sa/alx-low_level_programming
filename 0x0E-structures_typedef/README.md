# 0x0E. C - Structures, typedef

## **Overview**
This project explores **structures** and **typedef** in C.  
You will learn how to define and use `struct` types, initialize and print structures, create new struct instances dynamically, and manage memory safely using `malloc` and `free`.

## **Concepts**
- Defining and using `struct` types  
- Typedef to create aliases for struct types  
- Initializing and copying structures  
- Pointers to structures and using `->` operator  
- Dynamic memory allocation for structures  
- Memory management and freeing allocated memory  

## **Learning Objectives**
By the end of this project, you should be able to:  
- Define and use structures effectively  
- Use `typedef` to simplify structure types  
- Initialize, print, and manipulate structures  
- Create new struct instances dynamically  
- Free memory safely for dynamically allocated structures  

## **Requirements**
- Editors: vi, vim, emacs  
- Compiler: gcc on Ubuntu 20.04 LTS  
- Options: `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- Code must follow **Betty style**  
- No global variables  
- Maximum 5 functions per file  
- Only the following C standard library functions are allowed: `printf`, `malloc`, `free`, and `exit`  
- All header files must be **include guarded**  
- All files must end with a new line  

## **Tasks**

### **0. Poppy**
**File:** `dog.h`  
Define a new type `struct dog` with the following elements:  
- `name`, type = `char *`  
- `age`, type = `float`  
- `owner`, type = `char *`  

### **1. A dog is the only thing on earth that loves you more than you love yourself**
**File:** `1-init_dog.c`  
Write a function that initializes a variable of type `struct dog`.  

**Prototype:**  
```c
void init_dog(struct dog *d, char *name, float age, char *owner);

---

### **2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad**
**File:** `2-print_dog.c`  
Write a function that prints a `struct dog`.  

**Prototype:**  
```c
void print_dog(struct dog *d);

---

### **3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read**
**File:** `dog.h`  
Define a new type `dog_t` as a new name for the type `struct dog`.  

---

### **4. A door is what a dog is perpetually on the wrong side**
**File:** `4-new_dog.c`  
Write a function that creates a new dog dynamically.  

**Prototype:**  
```c
dog_t *new_dog(char *name, float age, char *owner);

---
### **5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg**
**File** '5-free_dog.c'
Write a function that frees dogs.

**Prototype**
'''c
void free_dog(dog_t *d);

---
