
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TARGET_SUM 2772
#define MIN_CHAR 33
#define MAX_CHAR 126
#define MAX_PASSWORD_LENGTH 128

/**
 * main - Generates a random password accepted by 101-crackme.
 *
 * Return: Always 0 on success.
 */
int main(void)
{
	int remaining = TARGET_SUM;
	int length = 0;
	int max_char;
	int value;
	char password[MAX_PASSWORD_LENGTH];

	srand((unsigned int) time(NULL));

	while (remaining > MAX_CHAR && length < MAX_PASSWORD_LENGTH - 1)
	{
		max_char = remaining - MIN_CHAR;
		if (max_char > MAX_CHAR)
			max_char = MAX_CHAR;

		value = MIN_CHAR + rand() % (max_char - MIN_CHAR + 1);
		password[length++] = (char) value;
		remaining -= value;
	}

	if (remaining >= MIN_CHAR && remaining <= MAX_CHAR &&
		length < MAX_PASSWORD_LENGTH - 1)
	{
		password[length++] = (char) remaining;
		password[length] = '\0';
		printf("%s\n", password);
		return (0);
	}

	fprintf(stderr, "Could not generate password\n");
	return (1);
}
