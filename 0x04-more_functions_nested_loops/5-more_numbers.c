#include	"main.h"
/**
 * more_numbers	-	prints	0	to	14	10	times
 *
 * @i:	the	loop	to	count	10	lines
 * @j:	loopto	count	from	0	to	14
 */
void more_numbers(void)
{
	int	i,	j;

	for	(i	=	0;	i	<	10;	i++)
	{

		for	(j	=	0;	j	<=	14;	j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
