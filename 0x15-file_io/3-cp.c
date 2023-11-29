#include "main.h"

/**
 * main - copies file content to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 Success
**/
int main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
	FILE *file_from_ptr, *file_to_ptr;
	char *file_from, *file_to;
	char buffer[1024];
	size_t bytes;
	struct stat file_to_state;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	file_from_ptr = fopen(file_from, "r");
	if (file_from_ptr == NULL)
	{
		fprintf(stderr, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}

	if (stat(file_to, &file_to_state) == 0)
	{
		fprintf(stderr, "Error: Destination file already exists\n");
		fclose(file_from_ptr);
		exit(32);
	}

	file_to_ptr = fopen(file_to, "w");

	if (file_to_ptr == NULL)
	{
		perror("Error opening destination file");
		fclose(file_from_ptr);
		exit(100);
	}

	while ((bytes = fread(buffer, 1, sizeof(buffer), file_from_ptr)) > 0)
	{
		if (fwrite(buffer, 1, bytes, file_to_ptr) != bytes)
		{
			perror("Error writing to destination file");
			fclose(file_from_ptr);
			fclose(file_to_ptr);
			exit(101);
		}
	}

	if (fclose(file_from_ptr) != 0)
	{
		perror("Error closing source file");
		fclose(file_to_ptr);
		exit(100);
	}

	if (fclose(file_to_ptr) != 0)
	{
		perror("Error closing destination file");
		exit(100);
	}

	printf("File copied successfully.\n");

	return (0);
}
