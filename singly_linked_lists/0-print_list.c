#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t count = 0;

    while(h)
    {
        if (h->next != NULL)
        {
            _putchar(h->len);
            count++;
            h = h->next;
        }
        else
        {
            _putchar(h->len);
            count++;
            return count;
        }
    }
    return 1;
}