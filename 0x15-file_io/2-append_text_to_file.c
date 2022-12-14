#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file3, w, len = 0;

if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (len = 0; text_content[len];)
{	
len++;
}

}

file3 = open(filename, O_WRONLY | O_APPEND);
w = write(file3, text_content, len);

if (file3 == -1 || w == -1)
{
return (-1);
}
close(file3);

return (1);
}
