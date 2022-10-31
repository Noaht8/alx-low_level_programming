#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters to be printed.
 *
 * Return: numbers of letters printed. else 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(i, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(i);

	free(buf);

	return (nwr);
}
