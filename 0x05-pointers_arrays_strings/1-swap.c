#include "main.h"

/**
 * swap_int - swap two variables
 * @a: first variable
 * @b: second variable
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
