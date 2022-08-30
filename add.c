#include "monty.h"
/**
 * add - add two nodes remove the top node and place sum in new
 * @stack: dll stack
 * @line_number: line num
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	int a, b;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit_free(*stack);
		exit(EXIT_FAILURE);
	}
	a = (*stack)->n;
	b = (*stack)->next->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
	(*stack)->n = a + b;
}
