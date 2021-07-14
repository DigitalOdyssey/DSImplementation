#include "linked_list.h"

linked_list_T init_linked_list_from_array(int* array, int size)
{
    node_T* previous = NULL;
    for(int i = 0; i < size; i++)
    {
        node_T* node = calloc(1, sizeof(struct NODE_STRUCT));
        node->data = array[size - i - 1];
        node->next = (struct NODE_STRUCT*)previous;
        previous = (struct NODE_STRUCT*)node;
    }
    linked_list_T linked_list;
    linked_list = previous;
    return linked_list;
}

int linked_list_at_index(linked_list_T linked_list, int index)
{
    node_T* next = linked_list;
    for(int i = 0; i < index; i++)
    {
        next = next->next;
    }
    return next->data;
}

int linked_list_at_start(linked_list_T linked_list)
{
    return linked_list->data;
}

int linked_list_at_end(linked_list_T linked_list)
{
    node_T* next = linked_list;
    while(next->next != NULL)
    {
        next = next->next;
    }
    return next->data;
}

void linked_list_insert_at_start(linked_list_T* linked_list, int data)
{
    node_T* node = calloc(1, sizeof(struct NODE_STRUCT));
    node->data = data;
    node->next = *linked_list;
    *linked_list = node;
}

void linked_list_insert_at_end(linked_list_T linked_list, int data)
{
    node_T* node = calloc(1, sizeof(struct NODE_STRUCT));
    node->data = data;
    node->next = NULL;
    node_T* next = linked_list;
    while(next->next != NULL)
    {
        next = next->next;
    }
    next->next = node;
}

void linked_list_insert_at_index(linked_list_T* linked_list, int data, int index)
{
    node_T* node = calloc(1, sizeof(struct NODE_STRUCT));
    node->data = data;

    if(index == 0) return linked_list_insert_at_start(linked_list, data);

    node_T* next = *linked_list;
    node_T* previous = NULL;
    for(int i = 0; i < index; i++)
    {
        previous = next;
        next = next->next;
    }
    node->next = next;
    previous->next = node;
}

void linked_list_remove_at_start(linked_list_T* linked_list)
{
    *linked_list = (*linked_list)->next;
}

void linked_list_remove_at_end(linked_list_T linked_list)
{
    node_T* next = linked_list;
    node_T* previous = NULL;
    while(next->next != NULL)
    {
        previous = next;
        next = next->next;
    }
    previous->next = NULL;
}

void linked_list_remove_at_index(linked_list_T* linked_list, int index)
{
    if(index == 0) return linked_list_remove_at_start(linked_list);

    node_T* next = *linked_list;
    node_T* previous = NULL;
    for(int i = 0; i < index; i++)
    {
        previous = next;
        next = next->next;
    }
    previous->next = next->next;
}

int linked_list_size(linked_list_T linked_list)
{
    int size = 1;
    node_T* next = linked_list;
    while(next->next != NULL)
    {
        next = next->next;
        size++;
    }
    return size;
}
