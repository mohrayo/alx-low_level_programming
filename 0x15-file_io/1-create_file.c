#include "main.h"

/**
 * _strlen - find the length the of string
 * @str: string
 * Return: the length(sy)
 */
int _strlen(char *str)
{
	int sy;

	for (sy = 0; str[sy] != '\0'; sy++)
		;

	return (sy);
}

/**
 * create_file - create fxn that creates file
 * if file already exists, don't change permissions,truncate it
 * @filename: name to give to new file
 * @text_content: is NULL create empty file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int sy_wrote;

	if (!filename)
		return (-1);

	/* create with permissions if file doesn't exist, else truncate */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* if nothing to write, just return newly created file */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* write */
	sy_wrote = write(fd, text_content, _strlen(text_content));
	if (sy_wrote == -1 || sy_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
