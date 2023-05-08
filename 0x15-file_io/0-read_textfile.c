#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - It reads a text file and print it to STDOUT.
 * @filename: it is a text file being read
 * @letters: This are number of letters to be read
 * Return: w-actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t df;
	ssize_t a;
	ssize_t b;

	df = open(filename, O_RDONLY);
	if (df == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(df, buf, letters);
	a = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(df);
	return (a);
}
