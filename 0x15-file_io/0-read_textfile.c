#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: name of the text file
 * @letters: max number of letter to be read
 * Return: the actual number of letters it could read and print
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_pointer;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}
	file_pointer = fopen(filename, "r");

	if (file_pointer == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(letters + 1));

	if (buffer == NULL)
	{
		fclose(file_pointer);
		return (0);
	}
	bytesRead = fread(buffer, 1, letters, file_pointer);

	if (bytesRead <= 0)
	{
		free(buffer);
		fclose(file_pointer);
		return (0);
	}
	buffer[bytesRead] = '\0';
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	fclose(file_pointer);
	if (bytesWritten != bytesRead)
	{
		return (0);
	}
	return (bytesWritten);
}

