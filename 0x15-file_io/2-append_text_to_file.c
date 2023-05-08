#include "main.h"
/**
 * append_text_to_file - function that appends text to file
 * @filename: pointer to file to be appended
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
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

