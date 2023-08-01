#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the first node in the list.
 * @n: Data to insert in the new node.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    // Allocate memory for a new node
    listint_t *newNode = malloc(sizeof(listint_t));
    if (!newNode)
        return NULL;

    // Set the data and update the new node's 'next' pointer
    newNode->n = n;
    newNode->next = *head;

    // Update the head to point to the new node, effectively adding it to the beginning
    *head = newNode;

    // Return the pointer to the new node
    return newNode;
}
