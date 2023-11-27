#include "main.h"

/**
 * read_textfile - a function to read from file
 * @fname: file to be opened
 * @letters:  number of letters to be accessed
 *
 * Return: letters to be returned
 * return 0 if file read is not successful
 * if fname is NULL return 0
 * if any write failure, return 0
 */
ssize_t read_textfile(const char *fname, size_t letters)
{
	size_t length = 0, flen = 0;
	int fd = 0;
	char *buff = NULL;


	if (fname == NULL)
		return (length);

	fd = open(fname, O_RDWR | O_CREAT);
	if (fd < 0)
		return (length);

	buff = malloc(sizeof(*buff) * letters);
	if (buff == NULL)
		return (length);
	length = read(fd, buff, letters);
	flen = write(STDOUT_FILENO, buff, length);
	if (flen != length)
		length = 0;
	close(fd);
	free(buff);
	return (length);
}
