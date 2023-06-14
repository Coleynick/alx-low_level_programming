#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* append_text_to_file - Adds text at end of filename.
* @filename: File name.
* @text_content: Text to add at end of filename.
*
* Return: 1 (success) -1 (error).
*/
int append_text_to_file(const char *filename, char *text_content)
{
int i_fille;
int fileChars_written;
ssize_t k;

if (filename == NULL)
return (-1);

i_fille = open(filename, O_WRONLY | O_APPEND);
if (i_fille == -1)
return (-1);

if (text_content != NULL)
{
for (k = 0; text_content[k] != '\0'; k++)
;
fileChars_written = write(i_fille, text_content, k);
if (fileChars_written == -1 || fileChars_written != k)
{
close(i_fille);
return (-1);
}
}

close(i_fille);
return (1);
}
