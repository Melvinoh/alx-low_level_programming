#include <stdlib.h>
#include "math.h"

/**
 * _realloc - realocates memory back using malloc and free,
 * @ptr: a pointer to the memory previously allocated.
 * @old_size: the size of bytes for allocated space in pointer 
 * @new_size: the size in bytes for the new memory block
 *
 * Return: if new size == 0 old_size -ptr 
 */
void *realloc(void *ptr, unsigned int old_size, unsigned int _new_size 
