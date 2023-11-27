#include "main.h"

/**
 * create_file - a function to create a file
 * @fname: a file name parameter 1
 * @txt: parameter 2
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *fname, char *txt)
{
	int result = 1, fd = 0, i = 0, length = 0;

	if (fname == NULL)
	{
		result = -1;
		return (result);
	}

	fd = open(fname, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		result = -1;
		return (result);
	}

	if (txt)
	{

		while (txt[i])
			i++;

		length = write(fd, txt, i);
		if (length != i)
			result = -1;
	}
	close(fd);
	return (result);
}
