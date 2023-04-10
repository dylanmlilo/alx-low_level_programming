#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: file to be read
 * @letters: number of letters to be read
 *
 * Return: if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	ssize_t file_read;
	ssize_t file_write;
	ssize_t file_name;

	file_name = open(filename, O_RDONLY);
	if (file_name == -1)
	{
		return (0);
	}
	/* reserving space for a character array*/
	ch = malloc(sizeof(char) * letters);
	file_read = read(file_name, ch, letters);
	file_write = write(STDOUT_FILENO, ch, file_read);

	close(file_name);
	return (file_write);
}
