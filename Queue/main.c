#include <stdio.h>

#include "queue.h"

int main()
{
    int elements[5] = { 1, 2, 3, 4, 5 };
    queue_T* queue = init_queue_with_values(elements, 5, 6);
    printf("%s\n", queue_is_full(queue) ? "FULL" : "NOT FULL");
    return 0;
}
