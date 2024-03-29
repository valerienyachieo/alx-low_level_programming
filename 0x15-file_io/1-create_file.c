#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to the file to be created
 * @text_content: pointer to NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, i;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (o == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i] != 0; i++)
		;
	w = write(o, text_content, i);
	if (w == -1)
		return (-1);
	close(o);
	return (1);
}

