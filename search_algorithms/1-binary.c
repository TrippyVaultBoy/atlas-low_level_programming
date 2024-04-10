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
    max = size - 1;

    if (array == NULL)
    {
        return (-1);
    }

    while (min <= max)
    {
        middle = ((min + max) / 2);

        printf("Searching in array: ");

        for (i = min; i < max; i++) {
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
        else
        {
            min = middle + 1;
        }
    }

    return (-1);
}