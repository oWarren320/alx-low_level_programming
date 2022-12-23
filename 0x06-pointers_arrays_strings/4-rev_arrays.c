#include "main.h"
/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while(i >= 0)
	{
		if (i != n)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}

