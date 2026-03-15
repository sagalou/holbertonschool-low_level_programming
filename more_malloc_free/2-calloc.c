#include "main.h"
#include <stdlib.h>

/**
* *_calloc - allocates memory for an array
* @nmemb: number of elements to allocate
* @size: size of each element
*
* Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{

char *bytes;
void *ptr;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
	return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
	return (NULL);

bytes = ptr;
i = 0;
while (i < nmemb * size)
{
	bytes[i] = 0;
	i++;
}
return (ptr);

}
