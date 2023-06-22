#include "monty.stack"
/**
 * push_op - Pushes an element to the stack
 * @stack: Double pointer to the stack.
 * @C: Line number in the Monty bytecode file
 * Return: void
*/

void push_op(stack_t **stack, unsigned int C)
{
	int n, j = 0, Flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				Flag = 1; }
		if (Flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", C);
			fclose(bus.file);
			free(bus.content);
			free_stack(*stack);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", C);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(stack, n);
	else
		addqueue(stack, n);
}
