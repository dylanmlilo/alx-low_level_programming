#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a string to write to the file
 *
 * Return: if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int file_name, file_write, length;

	length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; )
			length++;
	}

	file_name = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	file_write = write(file_name, text_content, length);

	if (file_name == -1 || file_write == -1)
	{
		return (-1);
	}

	close(file_name);
	return (1);
}
