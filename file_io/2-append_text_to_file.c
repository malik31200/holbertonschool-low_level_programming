#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int _strlen(const char *str);

/**
 * append_text_to_file - Function that append a file at the end of a file
 * @filename: is the file to append
 * @text_content: is the text to append at the end to file
 * Return: -1 is NULL or return 1 if success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wcount, len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	len = _strlen(text_content);
	wcount = write(fd, text_content, len);
	if (wcount == -1 || wcount != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
/**
 *_strlen - Calculate Lengh of a string
 *@str: is a string
 *Return: len
 */
int _strlen(const char *str)
{
	int len = 0;

	if (str == NULL)
	{
		return (0);
	}
	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
