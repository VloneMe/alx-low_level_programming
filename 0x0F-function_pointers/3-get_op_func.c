#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func -  theis function selects the correct function
 * to perform the operation asked by the user.
 *
 * @s: An input char pointer operator passed as argument
 *
 * Return: a pointer to the function
 *
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int n = 0;

	while (n < 5)
	{
		if (*(ops[n]).op == *s && *(s + 1) == '\0')
			return (ops[n].f);
		n++;
	}

	return (NULL);

}
