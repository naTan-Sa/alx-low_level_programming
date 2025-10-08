#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints the content of a memory buffer
 * @b: pointer to the buffer
 * @size: number of bytes to print
 *
 * Description:
 * Prints the content of `size` bytes from buffer `b` in a
 * structured format: address, hexadecimal content (10 bytes per line),
 * and ASCII representation. Non-printable characters are shown as '.'.
 * If size <= 0, prints only a newline.
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", b[j]);
			else
				printf(" ");
			if (j % 2 != 0)
				printf(" ");
		}
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
