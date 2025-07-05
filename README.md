# 🧠 **GraphOS: Minimal Ring 0 Operating System**

**GraphOS** is a **bare-metal 32-bit operating system** built from scratch using **x86 Assembly** and **C**, designed for educational purposes. It provides a foundational understanding of low-level OS concepts, including bootloading, kernel development, and hardware interfacing.

## 📦 **Features**

| **Feature**                    | **Details**                                       |
| -------------------------------| ------------------------------------------------- |
| Ring 0 Execution      🛡️       | Operates in kernel mode for full hardware access  |
| Custom Bootloader     🧱       | Written in Assembly to initialize the system      |
| Freestanding Kernel   ⚙️       | Developed in C without standard libraries         |
| ISO Image Generation  💿       | Creates bootable ISO using `xorriso` and `mtools` |
| QEMU Virtualization   🖥️       | Supports testing via QEMU emulator                |

---

## 🗂️ **Project Structure**

```plaintext
GraphOS/
├── Bootloader/                 # Contains the low-level boot code
│   └── Bootloader.asm          # The primary 16-bit x86 Assembly code for the boot sector.
├── include/                    # Directory for kernel header files (.h)
│   ├── bool.h                  # Definitions for boolean type and true/false macros.
│   ├── calculator.h            # Header for simple calculator functionalities.
│   ├── crypto.h                # Common cryptographic utility definitions (e.g., bitwise operations).
│   ├── easter.h                # Declarations for "easter egg" functions.
│   ├── io.h                    # Input/Output functions for hardware interaction (e.g., keyboard, VGA).
│   ├── kbd.h                   # Keyboard definitions, scan codes, and key maps.
│   ├── limits.h                # Defines integer limits and floating-point epsilon (EPS).
│   ├── math.h                  # Mathematical function declarations (e.g., sin, cos, sqrt, pow).
│   ├── math_shell.h            # Header for mathematical shell command parsing and execution.
│   ├── memory.h                # Memory management (heap) structures and function declarations.
│   ├── parsing.h               # Utilities for parsing strings, integers, and floats.
│   ├── random.h                # Pseudo-random number generation functions.
│   ├── sha224.h                # SHA-224 hashing function declaration.
│   ├── sha256.h                # SHA-256 hashing function declaration.
│   ├── shell_history.h         # Data structures and functions for command history.
│   ├── sleep.h                 # Declaration for the sleep function.
│   ├── string.h                # String manipulation functions (e.g., strlen, strcpy, atoi, ftoa).
│   ├── thread.h                # (Empty) Placeholder for potential threading functionalities.
│   ├── time.h                  # Functions for interacting with the Real-Time Clock (RTC).
│   ├── tty.h                   # Terminal (TTY) definitions, VGA driver, and printk function.
│   ├── utils.h                 # General utility functions (e.g., print_logo, about).
│   └── version.h               # Defines the current version numbers of GraphOS.
├── src/                        # Contains the main kernel source code (.c and .s)
│   ├── calculator.c            # Implements basic arithmetic operations and a stack-based calculator.
│   ├── crypto.c                # Core cryptographic utilities (e.g., bitwise rotations, concatenation).
│   ├── easter.c                # Implementations of the "easter egg" responses.
│   ├── io.c                    # Implementations for input/output operations (e.g., shutdown, reboot, keyboard scan).
│   ├── kernel.c                # The main entry point of the 32-bit kernel, handling shell logic and command dispatch.
│   ├── loader.s                # Assembly code for initial kernel loading and setup (stack, calling main).
│   ├── math.c                  # Implementations of various mathematical functions (e.g., sin, cos, sqrt, exp, log).
│   ├── math_shell.c            # Implements the logic for mathematical shell commands.
│   ├── memory.c                # Heap memory allocator implementation (kmalloc, kfree).
│   ├── parsing.c               # Implementations for string, integer, and float parsing.
│   ├── random.c                # Pseudo-random number generator implementation.
│   ├── sha224.c                # Implements the SHA-224 hashing algorithm.
│   ├── sha256.c                # Implements the SHA-256 hashing algorithm.
│   ├── shell_history.c         # Functions for managing the command history linked list.
│   ├── string.c                # Implementations of various string manipulation functions (e.g., strlen, strcmp, atoi, ftoa).
│   ├── time.c                  # Functions for reading and displaying time and date from the RTC.
│   ├── tty.c                   # Terminal driver implementation, including screen initialization and character output.
│   └── utils.c                 # Implementations of general utility functions like `print_logo` and `about`.
├── .gitignore                  # Git configuration file to ignore generated binaries and temporary files.
├── current_version.txt         # Text file storing the current version of the OS, read by `update_version.c`.
├── start.asm                   # The main 32-bit Assembly entry point for the kernel after the bootloader, sets up stack and calls C main.
├── Makefile                    # The build automation script for compiling, linking, and creating the ISO.
├── update_version.c            # A C utility to read and increment the version number, then update `include/version.h`.
├── README.md                   # Comprehensive project documentation, build instructions, and overview.
└── LICENSE                     # The MIT License file, detailing terms of use and distribution.

# Generated artifacts (not part of the source structure, but created by the build process):
# ├── graphos.iso               # The final bootable ISO image.
# └── graphos.bin               # The combined bootloader and kernel binary.
```

---

## 🚀 **Getting Started**

### 🔧 **Prerequisites**

Ensure the following tools are installed:

* `nasm` (for assembling)
* `gcc` (with `-m32` support)
* `xorriso` (for ISO creation)
* `mtools` (for disk image manipulation)
* `qemu` (for virtualization)

### 🛠️ **Build Instructions**

1. **Compile the Bootloader:**

   ```bash
   nasm -f bin Bootloader/bootloader.asm -o bootloader.bin

   #Test the Bootloader with Qemu
   qemu-system-x86_64 bootloader.bin
   ```

2. **Compile the Kernel:**

   ```bash
   gcc -c src/kernel.c -o kernel.o -ffreestanding -m32
   ```

3. **Generate the ISO Image:**

   ```bash
   make clean
   make graphos.iso
   ```

4. **Run with QEMU:**

   ```bash
   qemu-system-x86_64 -cdrom graphos.iso
   ```

---

## 🧪 **Sample Output**

Upon booting, you should see a simple "Hello, World!" message, indicating successful kernel execution.

---

## 👨‍💻 **Author**

**Raghav Shukla**
📌 [GitHub Profile](https://github.com/raghavshuklaofficial)

---

## 📄 **License**

This project is licensed under the **MIT License**. See the [LICENSE](https://github.com/raghavshuklaofficial/GraphOS/blob/main/License) file for details.

---

> 💬 *“Building GraphOS was a journey into the depths of system programming, offering insights into the intricate workings of operating systems.”*

---
