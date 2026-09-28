#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    // Morse code for a-z. The index is the letter's position in the alphabet.
    char morse[26][5] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
        ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
        "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
    };

    char word[MAX_LENGTH];

    printf("Enter a word: ");
    scanf("%99s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        char letter = word[i];

        // turn uppercase into lowercase
        if (letter >= 'A' && letter <= 'Z') {
            letter = letter - 'A' + 'a';
        }

        if (letter >= 'a' && letter <= 'z') {
            printf("%s ", morse[letter - 'a']);
        } else {
            printf("? ");
        }
    }
    printf("\n");

    getchar();  // eats the Enter left over from scanf
    printf("Press enter to leave...");
    getchar();
    return 0;
}