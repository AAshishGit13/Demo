#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_STRING_LENGTH 100

void displayRandomString(char *randomString) {
    printf("Type the following: %s\n", randomString);
}

int main() {
    char input[MAX_STRING_LENGTH];
    char randomString[MAX_STRING_LENGTH];
    int correctChars = 0;
    clock_t startTime, endTime;
    double typingSpeed;

    // Replace this with your own set of words or phrases
    const char *words[] = {"programming", "keyboard", "challenge", "typing","india""is""my country and i m an indian " "game"};

    // Seed the random number generator
    srand(time(NULL));

    // Get a random word from the list
    strcpy(randomString, words[rand() % (sizeof(words) / sizeof(words[0]))]);

    // Display the random string to the user
    displayRandomString(randomString);

    // Record start time
    startTime = clock();

    // Get user input
    fgets(input, MAX_STRING_LENGTH, stdin);

    // Remove the newline character from input
    input[strcspn(input, "\n")] = '\0';

    // Check correctness of input
    for (int i = 0; i < strlen(input) && i < strlen(randomString); i++) {
        if (input[i] == randomString[i]) {
            correctChars++;
        }
    }

    // Record end time
    endTime = clock();

    // Calculate typing speed
    typingSpeed = (double)correctChars / ((double)(endTime - startTime) / CLOCKS_PER_SEC) * 60; // characters per minute

    // Display results
    printf("Your typing speed: %.2f characters per minute\n", typingSpeed);

    return 0;
}
