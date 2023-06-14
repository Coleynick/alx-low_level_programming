#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
* create_file - Make a file and writes the text content.
* @filename: File name to create.
* @text_content: What to write to the file.
*
* Return: 1 (success) -1 (failure)
*/
int create_file(const char *filename, char *text_content)
{
int i_fille, fileChars_Written, k;

if (filename == NULL)
return (-1);

i_fille = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (i_fille == -1)
return (-1);

if (text_content != NULL)
{
for (k = 0; text_content[k] != '\0'; k++)
;

fileChars_Written = write(i_fille, text_content, k);
if (fileChars_Written == -1)
{
close(i_fille);
return (-1);
}
}

close(i_fille);
return (1);
}
