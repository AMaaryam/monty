#include "monty.h"
/**
 * pall_stck - print the stack
 * @data: pointer of stack
 * @numl: integer
 * Return: void
 */

void pall_stck(stack_t **data, unsigned int numl)
{
	stack_t *temp;
	(void)numl;

	temp = *data;
	if (data == NULL)
		exit(EXIT_FAILURE);

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

