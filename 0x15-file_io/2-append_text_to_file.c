#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, letters;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, letters);

	if (o < 0 || w < 0)
		return (-1);

	close(o);

	return (1);
}
