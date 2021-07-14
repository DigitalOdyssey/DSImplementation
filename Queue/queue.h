#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>

typedef struct QUEUE_STRUCT
{
    unsigned int size, capacity;
    int* elements;
} queue_T;

queue_T* init_queue(unsigned int capacity);
queue_T* init_queue_with_values(int* elements, unsigned int size, unsigned int capacity);

void queue_enqueue(queue_T* queue, int value);

int queue_dequeue(queue_T* queue);

int queue_is_full(queue_T* queue);

int queue_is_empty(queue_T* queue);

int queue_front(queue_T* queue);

int queue_back(queue_T* queue);

#endif
