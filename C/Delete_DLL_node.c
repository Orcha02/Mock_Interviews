#include "headers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* 1 if succeded, -1 if fails*/
	/*index is the index of node that should be deleted*/
	/*index starts at 0*/
	unsigned int counter;
	dlistint_t *actual_node = *head, *new_node;

	if (actual_node == NULL)
		return (-1);
	if (index == 0)
	{
		actual_node = actual_node->next;
		*head = actual_node;
	}
	else
	{
		/*acual_node iterates to next node until index -1*/
		for (counter = 0; counter < index - 1; counter++)
		{
			if (actual_node == NULL)
				return (-1);
			actual_node = actual_node->next;
		}
		new_node = actual_node;
		new_node = new_node->next->next;
		free(actual_node->next);
		actual_node->next = new_node;
	}
	return (1);
}
