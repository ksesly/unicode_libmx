#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    void *temp;
    if (size == 0) {
        free(ptr);
        ptr = NULL;
        return NULL;
    }
    if (ptr == NULL) 
        temp = malloc(size);
    else {
        if (malloc_usable_size(ptr) < size) {
            temp = malloc(size);
            mx_memcpy(temp, ptr, malloc_usable_size(ptr));
            free(ptr);
        }
        else
            temp = ptr;
    }
    return temp;
}


int main (void) {
    int *arr = (int *)malloc(sizeof(int)*100);
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
    }
    printf("%zu\n", malloc_size(arr));
    arr = mx_realloc(arr, sizeof(int) * 10);
    printf("%zu\n", malloc_size(arr));
    return 0;

}