#include "monty.h"

/**
 * mul_stack - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void mul_stack(stack_t **stack, unsigned int line_number)
{
	int mul;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		mor_err(8, line_number, "mul");

	(*stack) = (*stack)->next;
	mul = (*stack)->n * (*stack)->prev->n;
	(*stack)->n = mul;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}


/**
 * mod_stack - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void mod_stack(stack_t **stack, unsigned int line_number)
{
	int sum_mod;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)

		mor_err(8, line_number, "mod");


	if ((*stack)->n == 0)
		mor_err(9, line_number);
	(*stack) = (*stack)->next;
	sum_mod = (*stack)->n % (*stack)->prev->n;
	(*stack)->n = sum_mod;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
