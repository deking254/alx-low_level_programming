#include "main.h"

/**
 * append_text_to_file - check the code
 * @filename: f
 * @text_content: tx
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t l;
size_t length = 0;
if (filename != NULL)
{
fd = open(filename, O_RDWR | O_APPEND);
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
{
close(fd);
return (-1);
}
}
else
return (-1);
}
else
{
if (fd != -1)
{
close(fd);
return (1);
}
else
return (-1);
}
}
else
return (-1);
}
