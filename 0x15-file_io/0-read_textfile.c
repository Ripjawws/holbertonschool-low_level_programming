#include "holberton.h"

/**
 *read_textfile - read a file
 *@filename: filename
 *@letters: letters
 *Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *new;
	ssize_t fdread, fdwrite, fdclose;

	if (filename == NULL)
	{
		return (0);
	}
	new = malloc(sizeof(char) * letters);
	if (new == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	fdread = read(fd, new, letters);
	if (fdread < 0)
	{
		return (0);
	}
	fdwrite = write(STDOUT_FILENO, new, fdread);
	if (fdwrite < 0)
	{
		return (0);
	}
	fdclose = close(fd);
	if (fdclose < 0)
	{
		return (0);
	}
	return (fdread);
}
