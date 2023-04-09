#include "main.h"

/**
 * create_file - check the code
 * @filename: file
 * @text_content: text.
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
size_t length = 0;
mode_t perm = 0600;
ssize_t l;
if (filename != NULL)
{
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, perm);
if (text_content != NULL)
{
while (text_content[length] != '\0')
length++;
if (fd != -1)
{
l = write(fd, text_content, length);
if (l != -1)
{
close(fd);
return (1);
}
else
return (-1);
}
else
return (-1);
}
else
{
close(fd);
return (-1);
}
}
return (-1);
}
