#include "variadic_functions.h"
/**
 * print_char - print character format specifier
 * @args: list of arguments
 * Return: nothing
**/

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - print int format specifier
 * @args: list of arguments
 * Return: nothing
**/

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print float format specifier
 * @args: list of arguments
 * Return: nothing
**/

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print string format specifier
 * @args: list of arguments
 * Return: nothing
**/
void print_string(va_list args)
{
	char *s = va_arg(args, char*);
	if (s == NULL)
		printf("nil");
	else
		printf("%s", s);
}
/**
 * print_all - prints all passed arguments
 * @format: list of types of arguments passed to the function
 * Return: nothing
**/
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	Format formats[] = 
	{
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);
	for (i = 0; formats[i].type != '\0'; i++)
	{
		const char *fmt = format;

		while (*fmt)
		{
			if (*fmt == formats[i].type)
			{
				formats[i].print_func(args);
				if (*(fmt + 1))
					printf(", ");
				break;
			}
			fmt++;	
		}
	}
	va_end(args);
	printf("\n");
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
