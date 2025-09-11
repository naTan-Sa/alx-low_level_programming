#include "main.h"

/**
 * print_triangle - prints a triangle using '#'
 * @size: size of the triangle
 *
 * Return: nothing (void)
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
			_putchar(' ');

		for (j = 0; j < i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
