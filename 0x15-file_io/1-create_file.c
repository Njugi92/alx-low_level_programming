#include "main.h"
/**
 * create_file - it creates a file
 * @filename: a pointer to the name of the file to create
 * @text_content: a pointer to a string to write to the file
 * Return: -1 (fails), 1 (success)
 */
int create_file(const char *filename, char *text_content)
{
int df, a, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
for (len = 0; text_content[len]; len++);	

df = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
a = write(df, text_content, len);

if (df == -1 || a == -1)
return (-1);

close(df);
return (1);
}
