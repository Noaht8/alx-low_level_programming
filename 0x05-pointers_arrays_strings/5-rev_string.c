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
    int a, b;
    int c = 0;
    char revS[1000];

    for (a = 0; 1; a++)
    {
        if (s[a] == 0)
        {
            break;
        }
        c++;
    }
    a = 0;
    for (b = c - 1; b >= 0; b--)
    {
        revS[a] = s[b];
        a++;
    }
    for (a = 0; 1; a++)
    {
        if (revS[a] == 0)
        {
            break;
        }
        s[a] = revS[a];
    }
}
