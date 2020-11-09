#include "holberton.h"
/**
 *create_file - read a file
 *@filename: filename
 *@text_content: letters
 *Return: number of letters
 */
int create_file(const char *filename, char *text_content)
{
	int fd, lenght, fdwrite;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content ==  NULL)
	{
		text_content =  "";
		lenght = 0;
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd < 0)

	{
		return (-1);
	}
	while (text_content[lenght] != '\0')
	{
		lenght++;
	}
	fdwrite = write(fd, text_content, lenght);
	if (fdwrite < 0)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
