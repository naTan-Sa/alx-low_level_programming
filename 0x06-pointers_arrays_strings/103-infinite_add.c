#include "main.h"

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result, or 0 if it can't fit
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	int carry = 0;
	int sum;

	while (n1[i])
		i++;
	while (n2[j])
		j++;

	if (i >= size_r || j >= size_r)
		return (0);

	r[size_r - 1] = '\0';
	i--;
	j--;
	size_r--;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		if (size_r <= 0)
			return (0);
		r[--size_r] = (sum % 10) + '0';
		carry = sum / 10;
	}
	return (r + size_r);
}

