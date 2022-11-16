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





