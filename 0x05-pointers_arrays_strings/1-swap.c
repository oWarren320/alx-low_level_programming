#include "main.h"

/**
 * swap_int - function that swaps two integers.
 *
 * return nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp =0;
	temp = *a;
	*a = *b;
	*b = temp;
}
