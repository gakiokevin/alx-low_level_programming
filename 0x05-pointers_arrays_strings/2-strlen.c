#include "main.h"
int _strlen(char *s)
{
int y;

y = 0;

while (*s++)
	y++;
return (y);
}
