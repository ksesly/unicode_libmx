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







