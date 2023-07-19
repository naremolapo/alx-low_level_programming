#include "main.h"

/**
 * _islower - Checks for lowercase alphabet
 * @c: Character to be checked
 * Return: if character is lowercase, otherwise
 */

int _islower(int C)
{
	if (C  >= 'a' && C <= 'z')
		return(1);
	else
		return(0);
}
