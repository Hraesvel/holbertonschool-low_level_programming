#include "holberton.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - fuction that read a text file and print it out the POSIX std
 * out
 * @filename: body of text to print.
 * @letters: max char to print.
 * Return: number of chars printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, err;
	ssize_t len;
	char *buf;

	len = fd = err = 0;
	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buf = malloc(sizeof(char) * letters + 1);
	if (!buf)
	{
		close(fd);
		return (0);
	}
	err = read(fd, buf, letters);
	if (err < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[letters + 1] = '\0';

	while (buf[len])
		len++;
	err = write(1, buf, len);
	if (err <= 0)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (len);
}
