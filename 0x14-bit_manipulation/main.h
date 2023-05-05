#ifndef MAINH
#define MAINH
#include <stdio.h>
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_bit(unsigned long int n, unsigned int index);
unsigned int binary_to_uint(const char *b);
int get_endianness(void);
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
int _putchar(char c);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
