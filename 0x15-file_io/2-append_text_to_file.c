#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The text content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written, text_len;

if (!filename)
return (-1);

if (!text_content)
return (1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

for (text_len = 0; text_content[text_len]; text_len++)
;

bytes_written = write(fd, text_content, text_len);
close(fd);

if (bytes_written == -1 || bytes_written != text_len)
return (-1);

return (1);
}

