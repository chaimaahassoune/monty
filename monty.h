#ifndef MONTY_H
#define MONTY_H

#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>

/**
 * struct stack_s - doubly linked list
 * @prev: Pointer to the previous element in the stack
 * @next: points to the next element of the stack
 * @n: Integer value stored in the stack element
 *
 */
typedef struct stack_s
{
	struct stack_s *prev;
	struct stack_s *next;
	int n;
} stack_t;
/**
 * struct bus_s - Structure to carry information through the program
 * @file: Pointer to a file associated with the operation
 * @arg: Argument value for the operation
 * @lifi: Flag indicating the state of the stack (0 for stack, 1 for queue)
 * @content: Content of the current line being processed
 */
typedef struct bus_s
{
	FILE *file;
	char *arg;
	int lifi;
	char *content;
}  bus_op;
extern bus_op bus;

void push_op(stack_t **stack, unsigned int C);
void pall_op(stack_t **stack);

#endif
