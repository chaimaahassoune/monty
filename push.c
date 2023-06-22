#include "monty.h"
/**
 * push - Pushes an element to the stack.
 * @stack: Double pointer to the stack.
 * @arg: Argument representing the element to be pushed.
 * @line_number: Line number in the Monty bytecode file.
 */
void push(stack_t **stack, char *arg, unsigned int line_number)
{
	stack_t *new_node;
        int num;

        if (arg == NULL || check_if_number(arg) == 0)
        {
                fprintf(stderr, "L%d: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
        }


        num = atoi(arg);
        new_node = malloc(sizeof(stack_t));
        if (new_node == NULL)
        {
                fprintf(stderr, "Error: malloc failed\n");
                exit(EXIT_FAILURE);
        }


        new_node->n = num;
        new_node->next = *stack;
        *stack = new_node;
}

