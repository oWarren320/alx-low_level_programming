#include "main.h"

/**
 *
 *_strlen - count char in str
 *
 *@a : is the str counter
 *
 *
 */


int _strlen(char *s)

{
	int a = 0;
	for (; *s++;)
		a++;
	return (a);
}
