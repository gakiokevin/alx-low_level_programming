#include	<stdio.h>
#include	"main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int	main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char	z;

	for	(z	=	'a';	z	<=	'z';	z++)
	{
		putchar(z);
	}
	putchar('\n');
}
