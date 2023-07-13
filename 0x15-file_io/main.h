#ifndef MAIN_H
#define MAIN_H

/*
 * The provided code is a header file that contains
 * function declarations related to file operations.
*/

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
