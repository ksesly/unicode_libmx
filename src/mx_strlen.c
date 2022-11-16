#include <stdio.h>

int mx_strlen(const char *s) {
    int length = 0;
    for (int i = 0; s[i] != 0; i++) {
        length++; 
    }
    return length;
}

// int main(void) {
//     char *s = "Hello";
//     int n = mx_strlen(s);
//     printf("%i", n);
// }

