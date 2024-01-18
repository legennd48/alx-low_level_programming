#include "search_algos.h"

/**
 * interpolation_search - searches through a list for a specified key val
 * @array: array to be searches
 * @size: size of array
 * @value: key value we are searching for
 * Return: -1 if failed, key idex on success
 */

int interpolation_search(int *array, size_t size, int value)
{
    size_t low, high, pos;

    if (!array || size == 0)
        return (-1);

    low = 0;
    high = size - 1;

    for (low = 0, high = size -1; high >= low;)
    {
        /* Calculate the probable position using interpolation formula */
        pos = low + ((double)(high - low) / (array[high] - array[low])) * (value - array[low]);

        if (pos >= size)
        {
            printf("Value checked array[%ld] is out of range\n", pos);
	    break;
        }

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return (pos);

        if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return (-1);
}
