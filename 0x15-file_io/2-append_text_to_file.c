#include "main.h"
/**
 * create_file - creats a file
 * @filename: the file name we want
 * @text_content: is null terminator
 * Return: return 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t fw;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;
		fw = write(f, text_content, len);
		if (fw == -1 || fw != len)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}
