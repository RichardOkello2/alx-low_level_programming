#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump, i = 0, prev = 0;
    listint_t *node;

    if (list == NULL)
        return (NULL);

    jump = sqrt(size);
    node = list;
    while (node->index < size && node->n < value)
    {
        prev = node->index;
        i = node->index + jump;
        while (node->index < i && node->next != NULL)
            node = node->next;

        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, node->index);

    for (i = prev; i <= node->index && node->n <= value; i++)
    {
        printf("Value checked at index [%lu] = [%d]\n", i, node->n);
        if (node->n == value)
            return (node);
        node = node->next;
    }

    return (NULL);
}

#endif /* SEARCH_ALGOS_H */
