#pragma once

#include <wchar.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int mx_strlen(const char *s); //mod
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







