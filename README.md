<img src="print_screen.png"/>

# GraphOS

A simple bare-bones 32-bit Ring 0 operating system written in Assembly x86 and C for educational purposes. <br>
Inspired by Terry A. Davis : Temple OS(in memoriam).

## Dependencies for building

`xorriso` <br>
`mtools` <br>

## Bootloader "hello world" example

### Compile bootloader

`nasm -o bootloader.bin bootloader.asm`

### Testing with QEmu

`qemu-system-x86_64 bootloader.bin`

## Compiling the kernel example

`gcc -c kernel.c -o kernel -ffreestanding -m32`

## Generating the ISO image

`make check_dir`
`make clean` <br>
`make graphos.iso`

## Contributors

##### Raghav Shukla (https://github.com/raghavshuklaofficial)
##### Jalaj Goel
##### Aditya Modi
