#include "search_algos.h"

/**
 *
*/

int binary_search(int *array, size_t size, int value)
{
    int middle;
    int i;
    int min;
    int max;

    min = 0;
    max = size;

    if (array == NULL)
    {
        return (-1);
    }

    while (min <= max)
    {
        middle = ((min + max) / 2);

        printf("Searching in array: ");

        for (i = min; i < max - 1; i++) {
            printf("%d, ", array[i]);
        }
        printf("%d", array[i]);
        printf("\n");

        if (value == array[middle])
        {
            return (array[middle]);
        }

        if (value < middle)
        {
            max = middle - 1;
        }
        else if (value > middle)
        {
            min = middle + 1;
        }
    }

    return (-1);
}