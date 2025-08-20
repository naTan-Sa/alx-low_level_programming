#include <stdio.h>

/**
 * main - entry point
 *
 * description: Prints all possible different combinations
 * of three digits in ascending order, separated by ", ".
 *
 * Return: 0 if success
 */

int main(void)
{
	int ones;
	int tens;
	int huns;

	for (huns = '0'; huns <= '9'; huns++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!(tens == huns) && (huns < tens))
				{
					if (!(ones == tens) && (tens < ones))
					{
						putchar(huns);
						putchar(tens);
						putchar(ones);
					if (!(ones == '9' && tens == '8' && huns == '7'))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
