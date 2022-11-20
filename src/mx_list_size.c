#include "../inc/libmx.h"

int mx_list_size(t_list *list) {
    t_list *temp = list;
    int size = 0;
    while (temp->next != NULL) {
        size++;
        temp = temp->next;
    }
    free(temp);
    temp = NULL;
    return size;
}


