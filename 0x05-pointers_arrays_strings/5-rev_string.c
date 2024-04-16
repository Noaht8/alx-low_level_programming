#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: Input character pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
    char str[1000] = "";
    int i = strlen(s) - 1;
    int j = 0;
    while (s[i] >= 1)
    {
        str[j] = s[i];
        i--;
        j++;
    }
    str[j] = '\0';
    strcpy(s, str);
}
