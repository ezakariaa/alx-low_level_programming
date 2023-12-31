#ifndef MAIN_H
#define MAIN_H

#include "main.h"
#include <stdio.h>

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
void printASCII(char *b, int start, int end);
void printHexes(char *b, int start, int end);
int isPrintableASCII(int n);

#endif
