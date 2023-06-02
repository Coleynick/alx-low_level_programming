#include "lists.h"
#include <stdio.h>
void beforeMain(void) __attribute__((constructor));

/**
 * beforeMain - Prints before main
 */
void beforeMain(void)
{
char *g = "You're";
char h[10] = "beat!";
printf("%s %s and yet, you must allow,\n", g, h);
printf("I bore my house upon my back!\n");
}
