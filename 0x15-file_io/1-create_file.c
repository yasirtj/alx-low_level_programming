#include "main.h"

/**
 * create_file - Creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminiated string to write to file
 * Return: 1 on success -1 on failure
**/

int create_file(const char *filename, char *text_content)
{
	FILE *file_pointer;

	if (filename == NULL)
	{
		return (-1);
	}
	file_pointer = fopen(filename, "w");

	if (file_pointer == NULL)
	{
		return (-1);
	}

	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		fclose(file_pointer);
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
