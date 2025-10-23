## 0x0D. C - Preprocessor

![Image link]()

## Author:
* **Noah Tsegay** <[Noaht8](https://github.com/Noaht8)>  😎

## Directory Contents
___

## [0-object_like_macro.h](0-object_like_macro.h)
Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.
```
julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$
```
## [1-pi.h](1-pi.h)
