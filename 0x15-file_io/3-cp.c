#include "main.h"
/**
 * main - function that copies content of one file to another
 * @argc: number of arguments
 * @argv: array of pointers to the argument
 *
 * Return: 0 (on success)
 */
int main(int argc, char **argv)
{
	int file_from, file_to, r, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(file_to, buffer, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(file_from, buffer, 1024);
	} while (r > 0);
	r = close(file_from);
	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	w = close(file_to);
	if (w == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}

