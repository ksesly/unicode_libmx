#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *temp = mx_strnew(len);
    mx_memcpy(temp, src, len);
    mx_memcpy(dst, temp, len);
    free(temp);
    return dst;
}


