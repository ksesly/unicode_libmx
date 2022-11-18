#pragma once

#include <wchar.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int mx_strlen(const char *s); 
void mx_print_unicode(wchar_t c); 
void mx_printchar(char c);
void mx_printstr(const char *s);
void mx_print_strarr(char **arr, const char *delim);
void mx_printint(int n);
double mx_pow(double n, unsigned int pow);
int mx_sqrt(int x);
char *mx_nbr_to_hex(unsigned long nbr);
unsigned long mx_hex_to_nbr(const char *hex);
int mx_strcmp(const char *s1, const char *s2);
int mx_bubble_sort(char **arr, int size);
int mx_binary_search(char **arr, int size, const char *s, int *count);
void mx_swap_char(char *s1, char *s2);
void mx_str_reverse(char *s);
void mx_strdel(char **str);
void mx_del_strarr(char ***arr);
char *mx_strdup(const char *str);
char* mx_strcpy(char *dst, const char *src);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strcat(char *s1, const char *s2);
int mx_count_words(const char *str, char delimeter);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
char **mx_strsplit(char const *s, char c);
char *mx_strjoin(char const *s1, char const *s2);
void mx_foreach(int *arr, int size, void (*f)(int));
int mx_quicksort(char **arr, int left, int right);
int mx_get_char_index(const char *str, char c);



bool mx_isspace(char c);



