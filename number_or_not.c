#include <stdio.h>

int main() {

    char sym = 0;
    printf("Enter your symbol :");
    scanf("%c", &sym);

    if (sym >= 48 && sym <= 57) {
    	printf("Your symbol is number.\n");
    } else {
	printf("Your symbol is not a number.\n");
    }
    
    return 0;
}
