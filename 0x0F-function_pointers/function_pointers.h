#include <stddef.h>
#ifndef function_pointers_H
#define function_pointers_H
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
#endif
