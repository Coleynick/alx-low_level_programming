#include"main.h"

/**
*rev_string-Reversesastring.
*
*@s:Pointertostringtobereversed.
*
*Return:void.
*/
void rev_string(char *s)
{
int len = 0;
int i, j;
char tmp;

/*Getlengthofstring*/
while (*(s + len) != '\0')
len++;

/*Swapcharactersfromstartandendofstring*/
for (i = 0, j = len - 1; i < j; i++, j--)
{
tmp = *(s + i);
*(s + i) = *(s + j);
*(s + j) = tmp;
}
}
