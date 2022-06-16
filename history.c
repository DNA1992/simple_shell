#include "main.h"
/**
*history- fills with constant bute
*@input:input from user
*Return: 1 on success, 0 error
*/
int history(char *input)
{
	char *filename = ".simple_shell_history";
	ssize_t fd, w;
	int len = 0;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_APPEND, 00600);
	if (fd < 0)
		return (-1);
	if (input)
	{
		while (input[len])
			len++;
		w = write(fd, input, len);
		if (w < 0)
			return (-1);
	}
	return (-1);
}
/**
*free_env- free Environment Variable Array
*@env:Environment variables
*Return:void
*/
void free_env(char **env)
{
	int x;

	for (x = 0; env[x]; x++)
	{
		free(env[x]);
	}
}
