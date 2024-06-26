#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Creates a file and writes text to it.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 * Return: On success, 1. On failure, -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[nletters])
			nletters++;

		rwrite = write(fd, text_content, nletters);
		if (rwrite == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
