#include <stdio.h>
char main(void)
{
	int i;

	for (i = 0; i < 200; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
