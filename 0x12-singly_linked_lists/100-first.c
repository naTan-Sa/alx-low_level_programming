#include "lists.h"
#include <stdio.h>
/**
 * before_main - prints a message before main() executes
 *
 * Return: nothing
 */
__attribute__((constructor))
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
