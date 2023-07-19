#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @size: size of the aarray
 * @action: pinter to function we need to use
 * @array: control array for function execution
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
