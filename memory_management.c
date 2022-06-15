#include "main.h"
/**
*_realloc -  Reallocates A Memory Block Using Malloc And Free
*@ptr: Pointer
*@old_size: Previous Size Of The Pointer
*@new_size: New Size Of The Pointer
*Return:void
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_size);
	if (result == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		fill_an_array(result, '\0', new_size);
		free(ptr);
	}
	else
	{
		_memcpy(result, ptr, old_size);
		free(ptr);
	}
	return (result);
}
/**
*free_all - Free Array Of Char Pointer And Char Pointer
*@cmd:Array Pointer
*@line:Char Pointer
*Return:void
*/
void free_all(char **cmd, char *line)
{
	free(cmd);
	free(line);
	cmd = NULL;
	line = NULL;
}

/**
*_memcpy - Copy Byte From Source To Destination
*@dest: Destination Pointer
*@src: Source Pointer
*@n: Size (How Much You Will Copy)
*Return: Void Pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
/**
*fill_an_array - Fill An Array By Constant Byte
*@a:Void Pointer
*@el: Int
*@len:Length Int
*Return: Void Pointer
*/
void *fill_an_array(void *a, int el, unsigned int len)
{
	char *q = a;
	unsigned int x = 0;

	while (x < len)
	{
		*q = el;
		q++;
		x++;
	}
	return (a);
}
/**
*_calloc -  Allocates Memory For An Array, Using Malloc.
*@size: Size
*Return: Void pointer
*/
void *_calloc(unsigned int size)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = '\0';
	}
	return (a);
}
