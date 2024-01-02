#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * check_cycle - checks if list is cyclical
 * @list: pointer to list to check
 * Return: 1 If Cyclical, 0 Otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;
	while (fast && fast->next)
		{
		slow = slow->next;
		fast = fast->next->next;
			if (slow == fast)
				return (1);
		}
	return (0);
}
