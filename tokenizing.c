#define _CRT_SECURE_NO_WARNINGS //Define error and warnings in the code.
#define BUFFER_SIZE 300 // define BUFFER_SIZE fixed size 300.
#include "tokenizing.h" // Include the custom header file for the tokenizing function prototype
#include <stdio.h> 
#include <string.h>
// Vl
void tokenizing(void)
{
    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[BUFFER_SIZE]; // Create an array to hold the input words, with length defined by BUFFER_SIZE
    char* nextWord = NULL; // Pointer to hold the address of the next tokenized word
    int wordsCounter; //defined variable integer wordsCounter
    // Do-While loop to keep prompting and processing until 'q' is entered
    do {
        printf("Type a few words separated by space (q - to quit) :\n");
        fgets(words, BUFFER_SIZE, stdin); // Read a input from the user
        words[strlen(words) - 1] = '\0'; // Replace the newline character from fgets with a string terminator
        if (strcmp(words, "q") != 0)  // Check if the input is not 'q' (to quit)
        {
            nextWord = strtok(words, " ");
            wordsCounter = 1;
            while (nextWord)
            {
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0);
    printf("*** End of tokenizing Words Demo ***\n\n");

   // V2
     
    printf("*** Start of Tokenizing Phrases Demo ***\n"); 
    char phrases[BUFFER_SIZE]; // Create an array to hold the input phrases, with length defined by BUFFER_SIZE
    char* nextPhrase = NULL; // Pointer to hold the address of the next tokenized phrases
    int phrasesCounter;  //defined variable integer phrasesCounter
    do {
        printf("Type a few phrases separated by comma (q - to quit) :\n"); 
        fgets(phrases, BUFFER_SIZE, stdin);// Read a input from the user
        phrases[strlen(phrases) - 1] = '\0'; // Replace the newline character from fgets with a string terminator
        if (strcmp(phrases, "q") != 0) {  // Check if the input is not 'q' (to quit)
            nextPhrase = strtok(phrases, ",");
            phrasesCounter = 1;
            while (nextPhrase) {
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase); // Print each phrase.
                nextPhrase = strtok(NULL, ","); // Continue to tokenize the rest of the phrases.
            }
        }
    } while (strcmp(phrases, "q") != 0); 
    printf("*** End of Tokenizing Phrases Demo ***\n\n");
}
// Main function of the program.
int main() {
    tokenizing(); // Calling the Function.
    return 0;
}