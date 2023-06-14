#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
* read_textfile - Reads&prints the contents of filename to stdout.
* @filename: File name to be read.
* @letters: Letters to be read & printed.
*
* Return: fileChars_Read or 0(error).
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *tempData;
ssize_t fileChars_Read;
ssize_t fileChars_Written;
int i_fille;

i_fille = open(filename, O_RDONLY);
if (i_fille == NULL ||  filename == NULL)
return (0);

tempData  = (char *)malloc(letters + 1);
if (tempData == NULL)
{
close(i_fille);
return (0);
}

fileChars_Read = read(tempData, sizeof(char), letters, i_fille);

fileChars_Written = write(tempData, sizeof(char), fileChars_Read, stdout);
if (fileChars_Written != fileChars_Read || fileChars_Read < 0)
{
free(tempData);
close(i_fille);
return (0);
}
tempData [fileChars_Read] = '\0';

free(tempData);
close(i_fille);

return (fileChars_Read);
}
