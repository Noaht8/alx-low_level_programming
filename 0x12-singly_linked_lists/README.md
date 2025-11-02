## 0x12. C - Singly linked lists

![Image link]()

## Author:
* **Noah Tsegay** <[Noaht8](https://github.com/Noaht8)>  😎

## More Info
Please use this data structure for this project:
```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
## Directory Contents
___

## [0-print_list.c](0-print_list.c)
