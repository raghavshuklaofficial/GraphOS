---
# 🧠 **GraphOS: Minimal Ring 0 Operating System**

**GraphOS** is a **bare-metal 32-bit operating system** built from scratch using **x86 Assembly** and **C**, designed for educational purposes. It provides a foundational understanding of low-level OS concepts, including bootloading, kernel development, and hardware interfacing.
---
---

## 📦 **Features**

| **Feature**          | **Icon** | **Details**                                       |
| -------------------- | -------- | ------------------------------------------------- |
| Ring 0 Execution     | 🛡️      | Operates in kernel mode for full hardware access  |
| Custom Bootloader    | 🧱       | Written in Assembly to initialize the system      |
| Freestanding Kernel  | ⚙️       | Developed in C without standard libraries         |
| ISO Image Generation | 💿       | Creates bootable ISO using `xorriso` and `mtools` |
| QEMU Virtualization  | 🖥️      | Supports testing via QEMU emulator                |

---

## 🗂️ **Project Structure**

```plaintext
GraphOS/
├── Bootloader/           # Assembly code for bootloading
├── include/              # Header files for kernel
├── src/                  # Kernel source code in C
├── start.asm             # Entry point in Assembly
├── Makefile              # Build automation script
├── graphos.iso           # Generated bootable ISO image
├── graphos.bin           # Compiled binary
├── update_version.c      # Version management script
└── README.md             # Project documentation
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

This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for details.

---

> 💬 *“Building GraphOS was a journey into the depths of system programming, offering insights into the intricate workings of operating systems.”*

---
