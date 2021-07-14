#include "queue.h"

queue_T* init_queue(unsigned int capacity)
{
    queue_T* queue = calloc(1, sizeof(struct QUEUE_STRUCT));
    queue->size = 0;
    queue->elements = calloc(capacity, sizeof(int));
    queue->capacity = capacity;
    return queue;
}

queue_T* init_queue_with_values(int* elements, unsigned int size, unsigned int capacity)
{
    if(size > capacity) return NULL;

    queue_T* queue = calloc(1, sizeof(struct QUEUE_STRUCT));
    queue->size = size;
    queue->elements = calloc(capacity, sizeof(int));
    for(int i = 0; i < size; i++)
    {
        queue->elements[i] = elements[i];
    }
    queue->capacity = capacity;
    return queue;
}

int queue_is_full(queue_T* queue)
{
    return queue->size == queue->capacity;
}

int queue_is_empty(queue_T* queue)
{
    return queue->size == 0;
}

void queue_enqueue(queue_T* queue, int value)
{
    if(queue_is_full(queue)) return;

    for(int i = 0; i < queue->size; i++)
    {
        queue->elements[i + 1] = queue->elements[i];
    }
    queue->size++;
    queue->elements[0] = value;
}

int queue_dequeue(queue_T* queue)
{
    if(queue_is_empty(queue)) return NULL;
    queue->size--;
    return queue->elements[queue->size];
}

int queue_front(queue_T* queue)
{
    return queue->elements[queue->size - 1];
}

int queue_back(queue_T* queue)
{
    return queue->elements[0];
}
