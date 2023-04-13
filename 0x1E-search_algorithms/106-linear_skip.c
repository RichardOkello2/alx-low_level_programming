#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer on the first node where value is located.
 *         If value is not present in list or if head is NULL, return NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *express, *prev;

    if (list == NULL)
        return (NULL);

    express = list->express;
    prev = list;

    while (express && express->n < value)
    {
        prev = express;
        express = express->express;

        printf("Value checked at index [%lu] = [%d]\n",
               prev->index, prev->n);
    }

    if (!express || express->n > value)
    {
        if (prev == list)
            return (NULL);

        printf("Value found between indexes [%lu] and [%lu]\n",
               prev->index, express ? express->index : prev->index);

        while (prev && prev->n < value)
        {
            printf("Value checked at index [%lu] = [%d]\n",
                   prev->index, prev->n);
            prev = prev->next;
        }

        return (prev && prev->n == value ? prev : NULL);
    }

    printf("Value checked at index [%lu] = [%d]\n",
           express->index, express->n);

    return (express);
}
