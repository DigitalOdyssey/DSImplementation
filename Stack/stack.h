#ifndef STACK_H
#define STACK_H
#include <stdlib.h>

#define DEFAULT_STACK_SIZE 5
#define MEMORY_ALLOCATION_INTERVAL 5

typedef struct STACK_STRUCT
{
    int size;
    int total;
    int* elements;
} stack_T;

stack_T* init_stack();
stack_T* init_stack_with_values(int* elements, int size);

void stack_push(stack_T* stack, int value);

int stack_pop(stack_T* stack);

int stack_peek(stack_T* stack);

int stack_size(stack_T* stack);

#endif
