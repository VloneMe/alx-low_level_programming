#include <stdio.h>

/*** Constructors in C ***/
void main_constructor(void) __attribute__((constructor));

/**
 * main_constructor - This is a constructor function
 *
 * Return: Nothing
 */

void main_constructor(void)
{

	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
