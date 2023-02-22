#include	<stdio.h>
#include	"main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
int	main(void)
{
	print_alphabet();
	return (0);
}
/**
*print_alphabet()-afunctionthatprintsthealphabetinlowecase
*/
void print_alphabet(void)
{
	char	c;

	for	(c	=	'a';	c	<=	'z';	c++)
	{
		putchar(c);
	}
	putchar('\n');
}
