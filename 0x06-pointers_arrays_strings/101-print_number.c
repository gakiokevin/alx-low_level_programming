#include "main.h"
void print_number(int n)
{
	if (n < 0)
	{
	n = -n;
	_putchar(n);
	}
	if (n > 0)
		_putchar(n);
}

