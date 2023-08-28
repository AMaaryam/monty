#include "monty.h"

/**
 * add_newnode - add new node a stack.
 * @NEW_nd: pt to nw nodeof the stack
 * @numl: integer
 * Return: void
 */
void add_newnode(stack_t **NEW_nd,__attribute__((unused)) unsigned int numl)
{
	stack_t *temp, *top = NULL;

	if (!NEW_nd || *NEW_nd == NULL)
		exit(EXIT_FAILURE);
	if (!top)
	{
		top = *NEW_nd;
		return;
	}
		temp = top;
		top = *NEW_nd;
		top->next = temp;
		temp->prev = top;
}


