#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - function that prints a name
 *@name: name to be used
 *@f: function to print the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
