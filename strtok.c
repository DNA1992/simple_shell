#include "main.h"
/**
*check_delim - checks character match or identity
*@c:character to check
*@str:string check
*Return: 1 on success, 0 on failure
*/
unsigned int check_delim(char c, const char *str)
{
	unsigned int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (c == str[x])
			return (1);
	}
	return (0);
}
/**
*_strtok- make a string Token
*@str:string
*@delim:delimiter
*Return:Pointer to the next token
*/
char *_strtok(char *str, const char *delim)
{
	static char *ts;
	static char *nt;
	unsigned int x;

	if (str != NULL)
		nt = str;
	ts = nt;
	if (ts == NULL)
		return (NULL);
	for (x = 0; ts[x] != '\0'; x++)
	{
		if (check_delim(ts[x], delim) == 0)
			break;
	}
	if (nt[x] == '\0' || nt[x] == '#')
	{
		nt = NULL;
		return (NULL);
	}
	ts = nt + x;
	nt = ts;
	for (x = 0; nt[x] != '\0'; x++)
	{
		if (check_delim(nt[x], delim) == 1)
			break;
	}
<<<<<<< HEAD
<<<<<<< HEAD
	if ((nt)[x] = '\0')
=======
	if (nt[x] = '\0')
>>>>>>> 03722eeca9e28271459ff80e25d35e7bcf35e17f
=======
	if (nt[x] == '\0')
>>>>>>> 0bf206c720f28c86fe6af69fde4e452ae2fc5d3f
		nt = NULL;
	else
	{
		nt[x] = '\0';
		nt = nt + x + 1;
		if (*nt == '\0')
			nt = NULL;
	}
	return (ts);
}
