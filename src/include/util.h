#ifndef UTIL_H
#define UTIL_H

#include "types.h"

void memory_copy(char *source,char *dest,int nbytes);
void memory_set(uint8 *dest, uint8 vla, uint32 len);
void int_to_ascii(int n,char str[]);

string  int_to_string(int n);
void * malloc(int nbytes);
int str_to_int(string ch);

#endif
