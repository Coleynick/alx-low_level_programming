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
    int password_length = 10; // Set the desired password length
    char password[password_length + 1]; // Allocate space for password string

    srand(time(NULL)); // Seed the random number generator with the current time

    // Generate random password characters and add them to the password string
    for (int i = 0; i < password_length; i++) {
        int ascii_value = rand() % 62; // Generate a random number between 0 and 61
        if (ascii_value < 10) {
            password[i] = '0' + ascii_value; // If the random number is between 0 and 9, add a digit character
        } else if (ascii_value < 36) {
            password[i] = 'A' + ascii_value - 10; // If the random number is between 10 and 35, add an uppercase letter
        } else {
            password[i] = 'a' + ascii_value - 36; // If the random number is between 36 and 61, add a lowercase letter
        }
    }

    password[password_length] = '\0'; // Add null terminator to password string

    printf("%s\n", password); // Output the password

    return (0);
}
