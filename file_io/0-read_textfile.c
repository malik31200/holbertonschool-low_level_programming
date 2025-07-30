#include <stdio.h>
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints
 * @filename: is the file to read
 * @letters: is the numbers of letters
 * Return: 0 is NULL or return the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	char *temp;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	temp = malloc(letters + 1);
	if (temp == NULL)
	{
		close(fd);
		return (0);
	}
	count = read(fd, temp, letters);
	if (count == -1)
	{
		free(temp);
		close(fd);
		return (0);
	}
	count = write(1, temp, count);
	if (count == -1)
	{
		free(temp);
		close(fd);
		return (0);
	}
	free(temp);
	close(fd);
	return (count);
}
