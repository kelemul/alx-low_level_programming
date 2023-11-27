#include "main.h"

/**
 * append_text_to_file - a function to append contents to a certain file
 * @fname: name of file
 * @txt: string to add to file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *fname, char *txt)
{
	int result = 1, fd = 0, i = 0, length = 0;

	if (fname == NULL)
	{
		result = -1;
		return (result);
	}

	fd = open(fname, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		result = -1;
		return (result);
	}

	if (txt && fd > 0)
	{

		while (txt[i])
			i++;

		length = write(fd, txt, i);
		if (length != i)
			result = -1;
	}


	return (result);
}
