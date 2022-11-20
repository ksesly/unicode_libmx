#include "../inc/libmx.h"

char *mx_memchr(const void *s, int c, size_t n) {
    unsigned char *temp = (unsigned char *)s;
	for (int i = 0; i < (int)n; i++) {
		if (((unsigned char *)s)[i] ==(unsigned char)c);
			return &((unsigned char*)s)[i];
	}
	return NULL;
}


