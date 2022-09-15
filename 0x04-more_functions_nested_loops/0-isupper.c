#include "main.h"

/**
 * _isupper - function that verifies if a character is uppercase or not
 * @c: the ASCII equivalent of the character
 * Returns: returns 1 if true 0 if false
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'z'))

		return (1);
	else
		return (0);
}
