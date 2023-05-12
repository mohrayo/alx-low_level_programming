#include "main.h"

/**
 * read_textfile - a fxn that reads file and prints to std output
 * @filename: the file to read
 * @letters: no of letters to read and print
 * Return: return 0 if file cant be opened,read,write or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t y_read, y_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* open */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* malloc buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read */
	y_read = read(fd, buffer, letters);
	if (y_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write */
	y_wrote = write(STDOUT_FILENO, buffer, y_read);
	if (y_wrote == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (y_read);

}
