#include "monty.h"

/**
 * pall_op - prints the stack
 * @stack: stack stack
 * Return: no return
*/

void pall_op(stack_t **stack)
{
	stack_t *var;

	var = *stack;
	if (var == NULL)
		return;
	while (var)
	{
		printf("%d\n", var->n);
		var = var->next;
	}
}
