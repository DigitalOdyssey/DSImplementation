#include "stack.h"

stack_T* init_stack()
{
    stack_T* stack = calloc(1, sizeof(struct STACK_STRUCT));
    stack->size = 0;
    stack->total = DEFAULT_STACK_SIZE;
    stack->elements = calloc(stack->total, sizeof(int));
    return stack;
}

stack_T* init_stack_with_values(int* elements, int size)
{
    stack_T* stack = calloc(1, sizeof(struct STACK_STRUCT));
    stack->size = size;
    stack->total = size;
    stack->elements = elements;
    return stack;
}

void stack_push(stack_T* stack, int value)
{
    if(++stack->size > stack->total)
    {
        realloc(stack->elements, sizeof(int) * (stack->total + MEMORY_ALLOCATION_INTERVAL));
    }

    stack->elements[stack->size - 1] = value;
}

int stack_pop(stack_T* stack)
{
    if(--stack->size < 0) stack->size = 0;
    return stack->elements[stack->size];
}

int stack_peek(stack_T* stack)
{
    return stack->elements[stack->size-1];
}

int stack_size(stack_T* stack)
{
    return stack->size;
}
