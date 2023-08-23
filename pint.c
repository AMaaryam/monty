#include "monty.h"

/**
 * pint_function - prints the top element of the stack
 * @stack: pointer to the stack's top element
 * @line_number: line number in the Monty bytecode file
 * Return: No return value
 */
void pint_function(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*stack)->n);
}
