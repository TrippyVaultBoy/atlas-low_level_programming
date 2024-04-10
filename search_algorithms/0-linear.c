#include "search_algos.h"

/**
 *
*/

int linear_search(int *array, size_t size, int value)
{
    unsigned int i;

    for (i = 0; i < size - 1; i++)
    {
        if (array == NULL)
        {
            return (-1);
        }

        printf("Value checked array[%d]\n", array[i]);
        if (array[i] == value)
        {
            printf("Found %d at index: %d\n", array[i], i);
            return (array[i]);
        }
    }
    return (-1);
}
