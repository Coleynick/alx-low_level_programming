#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
    const int password_length = 10;
    char *password = malloc(password_length + 1);

    srand(time(NULL));
    int i;

    for (i = 0; i < password_length; i++) {
        int ascii_value = rand() % 62;
        if (ascii_value < 10) {
            password[i] = '0' + ascii_value;
        } else if (ascii_value < 36) {
            password[i] = 'A' + ascii_value - 10;
        } else {
            password[i] = 'a' + ascii_value - 36;
        }
    }

    password[password_length] = '\0';

    printf("%s\n", password);

    free(password);

    return (0);
}
