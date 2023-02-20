#include	<stdio.h>
/**
* main - #Task: Print alphabets in lowercase in reverse(z-a)
*
* Return: Always 0 (Success)
*/
int	main(void)
{
	char	chr;

	for	(chr	=	'z';	chr	>	'a';	chr--)
	{
		putchar(chr);
		putchar('\n');
	}
	return	(0);
}
