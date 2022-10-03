#include "main.h"
#include <stdlib.h>

int Rec_WordCounter(char *str, int i);
int WordCounter(char *str);

/**
 * Rec_WordCounter - count number of words recursively
 * @str: Point to the Character
 * @i: Current Index
 * Return: Number of Words
 */
int Rec_WordCounter(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + Rec_WordCounter(str, i + 1));
	return (Rec_WordCounter(str, i + 1));
}
/**
 * WordCounter - counts the words in array of strings
 * @str: pointer to the Character
 * Return: Number of Words
 */
int WordCounter(char *str)
{
	if (str[0] != ' ')
		return (1 + Rec_WordCounter(str, 0));
	return (Rec_WordCounter(str, 0));
}
/**
 * strtow - function that splits a string into words
 * @str: Input String to be Split
 * Return: pointer to an array of strings, or NULL if it Fails
 */
char **strtow(char *str)
{
	char **strDup;
	int i, n, m, words;

	if (str == NULL || str[0] == 0)
		return (NULL);
	words = WordCounter(str);
	if (words < 1)
		return (NULL);
	strDup = malloc(sizeof(char*) * (words + 1));
	if (strDup == NULL)
		return (NULL);
	i = 0;
	while (i < words && *str != '\0')
	{
		if (*str != ' ')
		{
			n = 0;
			while (str[n] != ' ')
				n++;
			strDup[i] = malloc(sizeof(char) * (n + 1));
			if (strDup[i] == NULL)
			{
				while (--i >= 0)
					free(strDup[--i]);
				free(strDup);
				return (NULL);
			}
			m = 0;
			while (m < n)
			{
				strDup[i][m] = *str;
				m++, str++;
			}
			strDup[i][m] = '\0';
			i++;
		}
		str++;
	}
	strDup[i] = '\0';
	return (strDup);
}
