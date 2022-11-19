#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    //check for null 
    if (str == NULL || sub == NULL || replace == NULL)
        return NULL;
    int counter = mx_count_substr(str, sub);

    //if tehre are no equals in string with delim
    if (counter == 0) {
        char *s1 = mx_strnew(mx_strlen(str));
        mx_strcpy(s1, str);
        return s1;
    }

    int size = mx_strlen(str) - mx_strlen(sub) + mx_strlen(replace) * counter;
    char *temp = mx_strnew(size);
    //char *temp_res = temp;
    //char *sub_temp = mx_strstr(str, sub);
    int equels = 0;
    int position = 0;
    while (equels < size && *str != 0) {
        position = mx_get_substr_index(str, sub);
        if (position == 0) {
            int i = 0; 
            while (i < mx_strlen(replace)) {
                temp[equels] = replace[i];
                equels++;
                i++;
            }
            str += mx_strlen(sub);
            continue;
        }
        temp[equels] = *str;
        equels++;
        str++;
    }

    return temp;
    // while (sub_temp != NULL) {
    //     mx_strncpy(temp_res, str, sub_temp - str);
    //     temp_res += sub_temp - str;
    //     str = sub_temp + mx_strlen(sub);
    //     mx_strcat(temp_res, replace);
    //     temp_res += mx_strlen(replace);
    //     sub_temp = mx_strstr(str, sub);
    // }

    //mx_strcat(temp_res, str);
    //return temp;
}

int main (void) {
    printf("%s\n", mx_replace_substr("McDonalds", "alds", "uts"));
    printf("%s\n", mx_replace_substr("Ururu turu", "ru", "ta"));
    return 0;
}


