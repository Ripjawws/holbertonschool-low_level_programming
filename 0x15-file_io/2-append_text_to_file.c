#include "holberton.h"
/**
 *append_text_to_file - read a file
 *@filename: filename
 *@text_content: letters
 *Return: number of letters
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdopen, lenght, fdwrite;

	if (filename == NULL)
	{
		return (-1);
	}

	fdopen = open(filename, O_WRONLY | O_APPEND);

	if (fdopen < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
		lenght = 0;
	}
	while (text_content[lenght] != '\0')
	{
		lenght++;
	}

	fdwrite = write(fdopen, text_content, lenght);
	if (fdwrite < 0)
	{
		return (-1);
	}
	close(fdopen);
	return (1);
}
