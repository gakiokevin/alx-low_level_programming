#include	"main.h"
#include	<stdio.h>
int	main(void)
{
	print_alphabet();
}
void print_alphabet(void)
{
	char	c;

	for	(c	=	'a';	c	<=	'z';	c++)
	{
		putchar(c);
	}
	putchar('\n');
}
