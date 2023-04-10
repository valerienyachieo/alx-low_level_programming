#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads a textfile
 * @filename: pointer to the name of the file
 * @letters: number of letter the function should read and print
 *
 * Return: 0 if function falisl or file name is null
 * otherwise returns actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || o == -1 || r != w)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}




