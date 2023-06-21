# Monty Project

## Introduction
This is a group project in C that focuses on implementing stack and queue data structures. The goal of the project is to create an interpreter for Monty ByteCodes files, which are files containing Monty byte codes with specific instructions to manipulate a stack.

## Getting Started
To get started with the project, follow the instructions below.

### Prerequisites
- Ubuntu 20.04 LTS
- GCC compiler

### Installation
1. Clone the project repository from GitHub:
git clone <https://github.com/chaimaahassoune/monty.git>
2. Change into the project directory:
'''
cd monty
### Compilation
Compile the code using the following command:
'''
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

## Project Structure
The project repository consists of the following files:

- `main.c`: The main entry point of the program.
- `monty.h`: The header file containing function prototypes and data structure definitions.
- `stack_operations.c`: File containing implementations of stack-related operations.
- `queue_operations.c`: File containing implementations of queue-related operations.
- `opcode1.c`, `opcode2.c`, ...: Additional files containing implementations of specific opcodes.
- `README.md`: This file.

## Supported Opcodes
The project supports the following opcodes:
- `push`: Pushes an element to the stack.
- `pall`: Prints all values in the stack.
- `pint`: Prints the value at the top of the stack.
- `pop`: Removes the top element from the stack.
- `swap`: Swaps the top two elements in the stack.
- `add`: Adds the top two elements in the stack.
- `nop`: No operation.

Please refer to the project instructions for more details on each opcode's usage and behavior.

## Acknowledgements
- The project instructions and specifications were provided by ALX School.
## Author
- Chaimaa Hassoune
 

