# 0x01. C - Variables, if, else, while

![Image link]()

## Author:
* **Noah Tsegay** <[Noaht8](https://github.com/Noaht8)>  &#128511;

## Directory Contents
___

This directory contains the following files:
## [0-positive_or_negative.c](0-positive_or_negative.c)
This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

- You can find the source code [here](https://github.com/alx-tools/0x01.c/blob/master/0-positive_or_negative_c)
- The variable n will store a different value every time you will run this program
- You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
  - The number, followed by
      - if the number is greater than 0: `is positive`
      - if the number is 0: `is zero`
      - if the number is less than 0: `is negative`
  - followed by a new line
## [1-last_digit.c](1-last_digit.c)
This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

- You can find the source code [here](https://github.com/alx-tools/0x01.c/blob/master/1-last_digit_c)
- The variable n will store a different value every time you run this program
- You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
  - The string `Last digit of`, followed by
  - `n`, followed by
  - the string `is`, followed by
    - if the last digit of `n` is greater than 5: the string `and is greater than 5`
    - if the last digit of `n` is 0: the string `and is 0`
    - if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
  - followed by a new line
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$
```
