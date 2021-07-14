#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>

typedef struct NODE_STRUCT
{
    int data;
    struct NODE_STRUCT* next;
} node_T;

typedef node_T* linked_list_T;

linked_list_T init_linked_list_from_array(int* array, int size);

int linked_list_at_index(linked_list_T linked_list, int index);

int linked_list_at_start(linked_list_T linked_list);

int linked_list_at_end(linked_list_T linked_list);

void linked_list_insert_at_start(linked_list_T* linked_list, int data);

void linked_list_insert_at_end(linked_list_T linked_list, int data);

void linked_list_insert_at_index(linked_list_T* linked_list, int data, int index);

void linked_list_remove_at_start(linked_list_T* linked_list);

void linked_list_remove_at_end(linked_list_T linked_list);

void linked_list_remove_at_index(linked_list_T* linked_list, int index);

int linked_list_size(linked_list_T linked_list);

#endif
