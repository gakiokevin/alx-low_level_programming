#include "main.h"
void _puts(char *str)
{
	int z;

	while (str[z] != '\0')
	{
		_putchar(str[z]);
	z++;
	}
	_putchar('\n');
}
