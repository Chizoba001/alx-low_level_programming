#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - it reads a text file prints it to the POSIX standard output
 * @filename: the file name to be read
 * @letters: the number of letters it would read and print
 *
 * Return: the actual number of letters it will read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	FILE *file;

	if (filename == NULL)
	{
	return (0);
	}

	file = fopen(filename, "r");

	char buffer[letters + 1];

	ssize_t bytes_read = fread(buffer, sizeof(char), letters, file);

	fclose(file);

	ssize_t bytes_written;

	bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);

	if (bytes_read <= 0)
	{
	return (0);
	}

	if (bytes_written != bytes_read)
	{
	return (0);
	}

	return (bytes_read);
}
