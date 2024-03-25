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
    struct node temp = head;

/**
* get to the tail of the list
*/
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->prev;
    }


}