#ifndef _MAIN_H_
#define _MAIN_H_

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


int prnt_error(int val, char *s, int fd);
int create_file(const char *filename, char *text_content);
size_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
#endif
