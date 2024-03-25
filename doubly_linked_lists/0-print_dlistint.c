#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint- prints a doubly linked list
 * @h: pointer to head of the list
 * 
 * Return: the number of nodes in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *temp = h;
    int count;
    count = 0;

    while (temp->prev != NULL)
    {
        temp = temp->prev;
    }

    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        count++;
        temp = temp->next;
    }

    return (count);

}