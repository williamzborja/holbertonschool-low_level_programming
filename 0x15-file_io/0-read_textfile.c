#include "holberton.h"
/**
 * read_textfile - Read file and return letter size
 * @filename: name of file
 * @letters: size of buffer
 * Return: size of characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char *buffer;
	ssize_t size;

	if (!filename || !letters) /*edge cases*/
		return (0);
	file_d = open(filename, O_RDONLY);

	if (file_d == -1) /* file descriptor error*/
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);
	size = read(file_d, buffer, letters); /* read file*/
	printf("%s", buffer);				  /*print content*/
	close(file_d);
	free(buffer);  /* close file descriptor */
	return (size); /*read funcition return ssize_t*/
}
