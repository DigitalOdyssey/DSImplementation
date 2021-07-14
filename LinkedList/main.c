#include <stdio.h>

#include "linked_list.h"

int main()
{
    int array[6] = {1,2,3,4,5,2};
    linked_list_T linked_list = init_linked_list_from_array(array, 6);
    linked_list_remove_at_end(linked_list);
    printf("%d\n", linked_list_at_index(linked_list, 2));
    printf("%d\n", linked_list_at_start(linked_list));
    printf("%d\n", linked_list_at_end(linked_list));
    printf("%d\n", linked_list_size(linked_list));
    return 0;
}

// LINKED LIST - Node*
// NODE : DATA & NEXT(Node*)
//
//
// LINKED LIST -> [DATA | NEXT] -> [DATA | NEXT] -> [DATA | NULL]
