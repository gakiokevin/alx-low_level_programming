#include	"main.h"
/**
 * print_last_digit-afunctionto printlastdigit.
 *
 *Return:1prints intwhichisthelastdigit.
 *
 */

int print_last_digit(int)
{
	int	last_digit;

	while	(last_digit)
		last_digit	/=	10;
	return	(last_digit);
}
