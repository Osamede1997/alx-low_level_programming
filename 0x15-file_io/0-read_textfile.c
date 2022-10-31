#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output.
 * @filename: name of file
 * @letters: number of letters to be prtinted
 * return - number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t o, r, w;
    char *size;

    size = malloc(sizeof(char) * letters);

    if (filename == NULL)
    {
        return (0);
    }
    if (size == NULL)
    {
        return (0);
    }

    file1 = open(filename, O_RDONLY);
    r = read(file1, size, letters);
    w = write(STDOUT_FILENO, size, r);

    if (file1 == -1 || r == -1 || w == -1 || w != r)
    {
        free(size);
        return (0);
    }

    free(size);
    close(file1);

    return (w);
}
