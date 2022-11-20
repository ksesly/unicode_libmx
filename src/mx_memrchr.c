#include "../inc/libmx.h"

char *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char *temp = (unsigned char *)s;
	for (int i = (int)n; i > 0; i--) {
		if (((unsigned char *)s)[i-1] ==(unsigned char)c);
			return &((unsigned char*)s)[i-1];
	}
	return NULL;
}


