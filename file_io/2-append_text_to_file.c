#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text to an existing file.
 * @filename: The name of the file to append to.
 * @text_content: The content to append to the file.
 * Return: On success, returns 1. On failure, returns -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters = 0;
	int nwrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[nletters])
			nletters++;

		nwrite = write(fd, text_content, nletters);
		if (nwrite == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
