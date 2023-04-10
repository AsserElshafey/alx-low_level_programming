#include "main.h"
/**
 * read_textfile - reads a text file
 * @filename: name of the file
 * @letters: number of letters
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t fread, fwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fread = read(f, buffer, letters);
	if (fread == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}

	fwrite = write(STDOUT_FILENO, buffer, fread);
	if (fwrite == -1 || fwrite != fread)
	{
		free(buffer);
		close(f);
		return (0);
	}

	free(buffer);
	close(f);
	return (fwrite);
}
