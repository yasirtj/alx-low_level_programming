#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text file content
 * Return: 1 on success, -1 on failure
**/

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file_pointer;

	if (filename == NULL)
	{
		return (-1);
	}
	file_pointer = fopen(filename, "a");

	if (file_pointer == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (fputs(text_content, file_pointer) == EOF)
		{
			fclose(file_pointer);
			return (-1);
		}
	}
	fclose(file_pointer);
	return (1);
}
