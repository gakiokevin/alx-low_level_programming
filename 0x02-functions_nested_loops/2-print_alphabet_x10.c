#include	"main.h"

	void print_alphabet_x10(void)
	{
		char	me;

		char	her;

		for	(me	=	0;	me	<	10;	me++)
		{
			for	(her	=	'a';	her	<=	'z';	her++)
			{
				_putchar(her);
			}
			_putchar('\n');
		}
		return	(0);
	}

