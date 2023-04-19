#include "function_pointers.h"

/**
 * int_index - function that searche
 * @array: Array
 * @size: is the number of elementes in the array
 * @cmp: is a pointer to the function
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
