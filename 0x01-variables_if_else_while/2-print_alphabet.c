#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Prints the alphabet in lower case, followd by new line
 *
 * Reurn: Always 0 (Success) 
 */
int main(void)
{
	char letter;
	for (letter = 'a';letter <= 'z'; ++letter)
	{
		putchar(letter);
	}
	putchar('\n');
	
	return (0);
}
