#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: pointer to the name of the file
 * @text_content: string to add to the end of the file
 *
 * Return: If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int write_file, open_file, length;

	length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, length);

	if (write_file == -1 || open_file == -1)
	{
		return (-1);
	}

	close(open_file);

	return (1);
}
