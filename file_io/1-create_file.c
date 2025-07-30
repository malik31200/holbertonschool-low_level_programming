#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int _strlen(const char *str);

/**
 * create_file - Function that create a file and prints
 * @filename: is the file to read
 * @text_content: is the numbers of letters
 * Return: -1 is NULL or return 1 if success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wcount;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	wcount = write(fd, text_content, _strlen(text_content));
	if (wcount == -1 || wcount != _strlen(text_content))
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
