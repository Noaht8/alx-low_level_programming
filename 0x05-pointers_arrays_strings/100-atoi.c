#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: String input
 * Return: converted integer
 */
int _atoi(char *s)
{

  int i = 0;
  int num;
  int result = 0;
  int sign = 1;
  while (s[i] != '\0')
  {

    if (s[i] == '-')
    {
      sign *= -1;
      i++;
    }

    if (s[i] >= '0' && s[i] <= '9')
    {
      result = result * 10 + s[i] - '0';
      if (s[i + 1] < 48 || s[i + 1] > 57)
      {
        break;
      }
    }

    i++;
  }

  num = result * sign;

  return (num);
}
