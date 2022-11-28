#include "main.h"
/**
 * read_textfile -  Write a function that reads a text file and prints
 *  it to the POSIX standard output.
 *  @filename: name of the file to read from
 *  @letters: letters is the number of letters it should read and print
 *  Return: Returns the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f = 0, i = 0;
	char *buffer;

	if (!fiename || !letters)
		return (0);

	f = open(filename, O_RONLY);
	if (f < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	i = read(f, buffer, letters);
	i = write(STDOUT_FILENO, buffer, i);
	if (i < 0)
		return (0);

	close(f);
	free(buffer);
	return (i);
}
