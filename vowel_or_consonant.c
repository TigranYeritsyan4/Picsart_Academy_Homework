#include <stdio.h>

int main() {
    char letter;
    
    printf("Enter a letter: ");
    scanf("%c", &letter);
    
    if (letter >= 'a' && letter <= 'z') {
        letter = letter - 'a' + 'A';
    }
    
    if ((letter >= 'A' && letter <= 'Z')) {
        switch (letter) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a vowel.\n", letter);
                break;
            default:
                printf("%c is a consonant.\n", letter);
                break;
        }
    } else {
        printf("Invalid input. Please enter a valid letter.\n");
    }
    
    return 0;
}

