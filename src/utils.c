#include "../include/utils.h"
#include "../include/tty.h"

void print_logo()
{   printk("\t  ______  ________                   _______.                ______      ________                  \n");
    printk("\t |        |      |          /\       |      |  |      |     |      |    |                          \n");
    printk("\t |        |      |         /  \      |      |  |      |     |      |    |                          \n");
    printk("\t |   __   |______'        /    \     |______|  |______|     |      |     \\\\\\                    \n");
    printk("\t |     |  |       \      /______\    |         |______|     |      |           |                   \n");
    printk("\t |     |  |        \    /        \   |         |      |     |      |           |                   \n");
    printk("\t |_____|  |         \  /          \  |         |      |     |______|    _______|                   \n");
}

void about(char *version)
{
    printk("\n\tGraphOS - v%s - A simple 32-bit Ring 0 operating system");
    printk("\n\tInspired by Terry A. Davis : TempleOS(in memoriam)");
    printk("\n\tGitHub repository: https://github.com/raghavshuklaofficial/GraphOS");
}
