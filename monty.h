#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct stack_s - Structure for stack nodes
 * @n: Value stored in the node
 * @next: Pointer to the next node
 */
typedef struct stack_s
{
	int n;
	struct stack_s *next;
} stack_t;

/* Prototypes */
void push(stack_t **stack, unsigned int line_number, const char *n);
void pall(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
