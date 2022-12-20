#include "main.h"
/**
 * void reset_to_98 - change the value of n to 98 
 * @n - integer to change to 
 *
 * Return nothing 
 */

void reset_to_98(int *n)
{
	*n = 98;
}

/**
 *
 * main - pass the parameter of the code 
 *
 * Return 0
 */

int main(void)
{
	int n;

	n = 402;
	reset_to_98(n);
	return (0);

}
