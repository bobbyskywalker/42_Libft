# **42 Libft**  
*A custom C library built from scratch as part of the 42 curriculum at 42 Warsaw.*

---

## **📖 Overview**  
**Libft** is a library of C functions developed as a foundational project at **42 Warsaw**. This project involves recreating essential functions from the C Standard Library as well as implementing additional utilities for memory management, string manipulation, singly linked list control and other fundamental operations. The goal of the project is to provide students with a deeper understanding of low-level programming concepts, improve their ability to write clean and efficient code, and create a reusable codebase that can be applied to future projects within the 42 core curriculum.

---

## **📂 Project Structure**

The library is divided into three main sections:  
1. **C Standard Library Functions**  
   Reimplementations of basic libc functions like: `strlen`, `memcpy`, `calloc`, `atoi`, and more.  
   
2. **Utility Functions**  
Functions which do not appear directly in libc or are present in a different form, designed to handle memory, strings, and other repetitive tasks. Examples: `split`, `itoa`.  

3. **Linked List Operations (as a bonus part)**  
   A set of generic functions for working with singly linked lists (`t_list`).

---

## **⚙️ Compilation**

To compile the library, run the following commands in your terminal:

```bash
# Clone the repository:
git clone https://github.com/bobbyskywalker/42libft.git
cd libft

# Compile the library:
## only mandatory functions
make

## for mandatory and linked list bonus functions:
make bonus 

# The Makefile provides following rules:
bonus all clean fclean re
```

---

## **🛠 Usage**
(note: as a prerequisite you will definitely need a C compiler  :) )

1. Include the library in your project:
   ```c
    #include "libft.h"
    ```
2. Compile your code with the library (assuming the .a static library file and libft.h header are located in /libft dir in the root of your project)
    ```bash
    gcc -Wall -Wextra -Werror your_program.c -I./libft -L./libft -lft -o your_program
    ```
---
## ✅ Features
- 🧩 **Modular Design**: The library easily integrates with your C projects.
- 🛡 **Reusable Codebase**: A solid foundation for future projects at 42 and beyond.

---
## 💬 Notes

✨ **Feel free to submit a pull request if you want to contribute to this project!**  
📢 **If you're a 42 student, use this as a guide at most. Don't cheat, learn! <3**  
### 📅 Created in December 2024 as part of 42's Common Core at 42 Warsaw

