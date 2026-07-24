# C - _printf

## Description
This project is a custom implementation of the standard C library function `printf`. Developed as a team project at **Holberton School**, the goal is to produce a formatted output function called `_printf` that handles formatted string conversion specifiers, variadic arguments via `<stdarg.h>`, and buffer writing to the standard output stream (`stdout`).

All source files are strictly compliant with the **Betty coding style**.

## 📝 Learning Objectives
* Replicate the behavior of the standard C `printf` function.
* Master **variadic functions** using `va_list`, `va_start`, `va_arg`, and `va_end`.
* Understand string parsing, token management, and output buffer management.
* Implement structured function pointer lookup tables to map specifiers to their respective conversion functions.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** 100% compliant with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).
* **Authorized Functions/Macros:** `write`, `malloc`, `free`, `va_start`, `va_end`, `va_copy`, `va_arg`.
* **Global Variables:** Forbidden.

## 📁 Project Architecture & File List

All prototypes, structures, and function declarations are centralized in the `main.h` header file.

| File | Description |
| :--- | :--- |
| `main.h` | Header file containing structures, prototypes, and required library includes. |
| `_printf.c` | Core logic of the custom `_printf` function, string parser, and character counter. |
| `get_specifier.c` | Selection engine using function pointers to map format flags to their processing routines. |
| `print_char.c` | Handles `%c` (single character) conversion specifier. |
| `print_string.c` | Handles `%s` (string) conversion specifier, including `(null)` handling. |
| `print_percent.c` | Handles `%%` (percent literal) printing. |
| `print_int.c` | Handles `%d` and `%i` (signed decimal integers) conversion specifiers. |
| `man_3_printf` | Custom manual page for the `_printf` function. |

---

## 📊 Supported Conversion Specifiers

| Specifier | Output Type | Example |
| :---: | :--- | :--- |
| `%c` | Single character | `_printf("%c", 'H');` $\rightarrow$ `H` |
| `%s` | Null-terminated string | `_printf("%s", "Holberton");` $\rightarrow$ `Holberton` |
| `%%` | Literal `%` character | `_printf("100%%");` $\rightarrow$ `100%` |
| `%d` | Signed decimal integer | `_printf("%d", 1024);` $\rightarrow$ `1024` |
| `%i` | Signed decimal integer | `_printf("%i", -98);` $\rightarrow$ `-98` |

---

## 🚀 Compilation & Usage

To compile the `_printf` engine with a main test file (e.g., `main.c`), run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf_test