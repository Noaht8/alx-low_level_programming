# 0x08. C - Recursion

![Image link]()

## Author:
* **Noah Tsegay** <[Noaht8](https://github.com/Noaht8)>  😎

## Directory Contents
___

This directory contains the following files:

## [0-puts_recursion.c](0-puts_recursion.c)
Write a function that prints a string, followed by a new line.

Prototype: `void _puts_recursion(char *s);`

FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.
```
julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
Puts with recursion
julien@ubuntu:~/0x08. Recursion$
```
