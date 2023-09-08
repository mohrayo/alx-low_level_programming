#include "main.h"

/**
 * _strlen - length of string
 * @str: string
 * Return: length (lng)
 */
int _strlen(char *str)
{
	int lng;

	for (lng = 0; str[lng] != '\0'; lng++)
		;

	return (lng);
}

/**
 * append_text_to_file - append text at the end
 * @filename: name of file
 * @text_content: content to append
 * Return: 1 (success), -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ag;
	int s_wrote;

	if (!filename)
		return (-1);

	/* open file if it exists */
	ag = open(filename, O_WRONLY | O_APPEND);
	if (ag == -1)
		return (-1);

	/* if nothing to write, still successful */
	if (!text_content)
	{
		close(ag);
		return (1);
	}

	/* write */
	s_wrote = write(ag, text_content, _strlen(text_content));
	if (s_wrote == -1 || s_wrote != _strlen(text_content))
	{
		close(ag);
		return (-1);
	}

	close(ag);
	return (1);
}

