#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random password
void generatePassword(char *password, int length) {
    // Character pool includes special characters
    const char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=[]{}|;:',.<>?/";
    int charactersCount = sizeof(characters) - 1;

    for (int i = 0; i < length; i++) {
        password[i] = characters[rand() % charactersCount];
    }
    password[length] = '\0'; // Null-terminate the string
}

int main() {
    int passwordLength = 10;
    char password[passwordLength + 1];

    // Seed the random number generator
    srand(time(0));

    // Generate the password
    generatePassword(password, passwordLength);

    // Display the password
    printf("Generated Password: %s\n", password);

    return 0;
}

