#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array of integers.
 * array: array of integers.
 * @size: size of the elements in array
 * @cmp: pointer to func to be used to compare values.
 *
 * Return: If no element matches or size <= 0 - - 1.
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index] != 0))
			return (index);
	}
	return (-1)
}
