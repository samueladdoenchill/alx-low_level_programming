#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>  /* Standard I/O functions */
#include <stdlib.h> /* Standard library functions */

int _putchar(char c); /* Write character to output */
int _islower(int c);   /* Check if character is lowercase */
int _isalpha(int c);   /* Check if character is alphabetic */
int _abs(int n);       /* Calculate absolute value */
int _isupper(int c);   /* Check if character is uppercase */
int _isdigit(int c);   /* Check if character is digit */
int _strlen(char *s);  /* Get length of string */
void _puts(char *s);   /* Print string to output */
char *_strcpy(char *dest, char *src); /* Copy string */
int _atoi(char *s);    /* Convert string to integer */
char *_strcat(char *dest, char *src); /* Concatenate strings */
char *_strncat(char *dest, char *src, int n); /* Concatenate n chars */
char *_strncpy(char *dest, char *src, int n); /* Copy n chars */
int _strcmp(char *s1, char *s2); /* Compare strings */
char *_memset(char *s, char b, unsigned int n); /* Set memory */
char *_memcpy(char *dest, char *src, unsigned int n); /* Copy memory */
char *_strchr(char *s, char c); /* Find char in string */
unsigned int _strspn(char *s, char *accept); /* Get span in string */
char *_strpbrk(char *s, char *accept); /* Find char in set */
char *_strstr(char *haystack, char *needle); /* Find substring */

#endif
