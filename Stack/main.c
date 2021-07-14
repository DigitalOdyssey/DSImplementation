#include <stdio.h>
#include "stack.h"

int main()
{
    int elements[5] = {1, 2, 31, 23};
    stack_T* stack = init_stack();
    stack_T* stack_with_values = init_stack_with_values(elements, 4);

    printf("%d\n", stack_size(stack));
    printf("%d\n", stack_size(stack_with_values));

    printf("Hello World\n");
    return 0;
}
